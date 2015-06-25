#! /bin/bash
exec >& >(tee -a /tmp/debog-install-depot-multisystem.txt)

#	│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│
#	│          install-depot-multisystem.sh              │
#	│              écrit par François Fabre              │
#	│               MultiSystem LiveUSB                  │
#	│▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒│

#Mr Fabre François @frafa
#E-Mail: liveusb@gmail.com En Français SVP !
#http://liveusb.info/

#License: GNU General Public License (GPL)
#Ce programme est un logiciel libre: vous pouvez le redistribuer
#et/ou le modifier selon les termes de la "GNU General Public
#License", tels que publiés par la "Free Software Foundation"; soit
#la version 2 de cette licence ou (à votre choix) toute version
#ultérieure.
#
#Ce programme est distribué dans l'espoir qu'il sera utile, mais
#SANS AUCUNE GARANTIE, ni explicite ni implicite; sans même les
#garanties de commercialisation ou d'adaptation dans un but spécifique.
#
#Se référer à la "GNU General Public License" pour plus de détails.
#
#Vous devriez avoir reçu une copie de la "GNU General Public License"
#en même temps que ce programme; sinon, écrivez a la "Free Software
#Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA".
#http://www.gnu.org/licenses/gpl-howto.fr.html

#Sous Kde en boot livecd Activer depôt universe et installer zenity
if [ "$(sudo -A cat grep '^%admin ALL=(ALL) NOPASSWD: ALL' /etc/sudoers 2>/dev/null)" ]; then
echo
if [ "$(which software-properties-kde)" ]; then
sudo software-properties-kde --enable-component universe
if [ ! "$(which zenity)" ]; then
xterm -title 'Install zenity' -e "sudo apt-get update && sudo apt-get install -q -y zenity"
fi
fi
fi

#quelques test...
errorlist=()
testlist="apt-get sudo lsb_release tee zenity nohup xterm dpkg"
for i in ${testlist}
do
if [ ! "$(which "$i")" ]; then
errorlist=(${errorlist[@]} $i)
fi
done
#Stop si
if [ "$(echo "${errorlist[@]}")" ]; then
echo -e "\033[1;47;31m Error: ${errorlist[@]} \033[0m"
miseenforme="${errorlist[@]}"
zenity --error --text "Error: ${miseenforme}" 2>/dev/null
exit 0
fi

#si pas sudo!
if [ ! "$SUDO_USER" ]; then
msg1="L'installation de multisystem necessite les droits d'administrateur."
msg2="Installing multisystem requires administrator rights."
if [ "$(echo $LANG | grep -i "fr_FR.utf")" ]; then
zenity --info --text "<b>${msg1}</b>"
else
zenity --info --text "<b>${msg2}</b>"
fi
xterm -e "sudo "$0""
exit 0
fi

#chmod 777 /media
if [ "$(stat -c %a /media)" != "777" ]; then
chmod 777 /media
fi

#Rajouter test si deja installé sortie!
if [ "$(dpkg -l | grep 'ii  multisystem')" ]; then
msg1="multisystem est déjà installé!"
msg2="multisystem is already installed!"
if [ "$(echo $LANG | grep -i "fr_FR.utf")" ]; then
zenity --info --text "<b>${msg1}</b>"
else
zenity --info --text "<b>${msg2}</b>"
fi
exit 0
fi

#verifier que user appartiens au group disk
if [ ! "$(grep ^disk /etc/group | grep "$SUDO_USER")" ]; then
usermod -a -G disk "$SUDO_USER"
fi

#verifier que user appartiens au group adm
if [ ! "$(grep ^adm /etc/group | grep "$SUDO_USER")" ]; then
usermod -a -G adm "$SUDO_USER"
fi

#Activer depôt universe
if [ "$(which software-properties-gtk)" ]; then
#Sous Gnome
software-properties-gtk -e universe
elif [ "$(which software-properties-kde)" ]; then
#Sous Kde
software-properties-kde --enable-component universe
fi

#Pour Ubuntu hardy il faut activer en + le depot hardy-backport
if [ "$(lsb_release -cs)" == "hardy" ]; then
echo
#Sous Gnome
if [ "$(which software-properties-gtk)" ]; then
software-properties-gtk -e hardy-backport
#Sous Kde
elif [ "$(which software-properties-kde)" ]; then
software-properties-kde --enable-component hardy-backport
fi
fi

#Ajouter le depôt
if [ ! "$(grep '^deb http://liveusb.info/multisystem' /etc/apt/sources.list 2>/dev/null)" ]; then
vardeb="## Depôt MultiSystem\ndeb http://liveusb.info/multisystem/depot all main"
echo -e "$vardeb" | tee -a "/etc/apt/sources.list"
fi

#Ajouter clé publique pour apt
sudo -u "$SUDO_USER" wget -q http://liveusb.info/multisystem/depot/multisystem.asc -O- | apt-key add -

#Recharger les sources
apt-get update

#Installer le paquet multisystem
apt-get install -y --force-yes multisystem
apt-get -f install -y

#Verifier que est bien installé
if [ ! "$(dpkg -l | grep 'ii  multisystem')" ]; then
msg1="Une erreur est survenue"
msg2="An error occurred"
if [ "$(echo $LANG | grep -i "fr_FR.utf")" ]; then
zenity --error --text "<b>${msg1}</b>"
else
zenity --error --text "<b>${msg2}</b>"
fi
exit 0
fi

#Rendre executable fusermount pour bases Debian !
chmod +x "/usr/bin/fusermount" 2>/dev/null
chmod +x "/bin/fusermount" 2>/dev/null

#Modifs pour lmde!
if [ "$(stat  -c "%a" $(which fusermount))" = "4754" ]; then
chmod 755 $(which fusermount)
fi
if [ "$(stat  -c "%a" /media)" -lt "755" ]; then
chmod 755 /media
fi
if [ "$(stat  -c "%G" "$HOME/.local")" = "root" ]; then
sudo chown $SUDO_USER:$SUDO_USER -R "$HOME"/.local
fi

#message
msg1="Dorénavant pour lancer le script veuillez utiliser\nle Menu: /Applications/Accessoires/MultiSystem."
msg2="Now to start the script please use\nthe menu: / Applications/Accessoires/MultiSystem."
if [ "$(echo $LANG | grep -i "fr_FR.utf")" ]; then
zenity --info --text "<b>${msg1}</b>"
else
zenity --info --text "<b>${msg2}</b>"
fi

#lancer gui
nohup sudo -u "$SUDO_USER" -i "/usr/local/share/multisystem/gui_multisystem.sh"&
sleep 1
exit 0
