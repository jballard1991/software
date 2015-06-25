# Mount the installer image:
hdiutil attach /Applications/Install\ OS\ X\ Mavericks.app/Contents/SharedSupport/InstallESD.dmg -noverify -nobrowse -mountpoint /Volumes/install_app

# Convert the boot image to a sparse bundle:
hdiutil convert /Volumes/install_app/BaseSystem.dmg -format UDSP -o /tmp/Mavericks

# Increase the sparse bundle capacity to accommodate the packages:
hdiutil resize -size 8g /tmp/Mavericks.sparseimage

# Mount the sparse bundle for package addition:
hdiutil attach /tmp/Mavericks.sparseimage -noverify -nobrowse -mountpoint /Volumes/install_build

# Remove Package link and replace with actual files:
rm /Volumes/install_build/System/Installation/Packages
cp -rp /Volumes/install_app/Packages /Volumes/install_build/System/Installation/

# Unmount both the installer image and the sparse bundle:
hdiutil detach /Volumes/install_app
hdiutil detach /Volumes/install_build

# Resize the partition in the sparse bundle to remove any free space:
hdiutil resize -size $(hdiutil resize -limits /tmp/Mavericks.sparseimage | tail -n 1 | awk '{ print $1 }')b /tmp/Mavericks.sparseimage

# Convert the sparse bundle to ISO/CD master:
hdiutil convert /tmp/Mavericks.sparseimage -format UDTO -o /tmp/Mavericks

# Remove the sparse bundle:
rm /tmp/Mavericks.sparseimage

# Rename the ISO and move it to the desktop:
mv /tmp/Mavericks.cdr ~/Desktop/Mavericks.iso
