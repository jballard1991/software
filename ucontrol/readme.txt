******************
* ULTIMATE CONTROL
******************

This is the agent application of "Ultimate Control". Along with the mobile application, it allows you to take control of your mouse and keyboard through Wifi (local netowrk) and Bluetooth.

PRECONDITIONS:
*************

In order to run the application, the Java Virtual Machine must be installed. It is posible to use the OpenJDK, which lots of linux distributions come with. If yours doesn't, you can use a package manager to get "openjdk-6-jre" package, or you can run the following command:

sudo apt-get install openjdk-6-jre

In order to use the bluetooth capabilities, you will need the "libbluetooth-dev" package. Again, you can get it through a package manager or with the following command:

sudo apt-get install libbluetooth-dev


INSTALLATION:
************

In the terminal, you will have to run the "install" script. Superuser permissions are required so you can run it with the following command:

sudo sh install

If everything went ok, you can now open the program with the following command (no matter in what directory you are):

ucontrol

You can also use the launcher available to open the program: "Ultimate Control". It is also possible to copy it anywhere.

UNINSTALL:
*********

Before uninstalling the program, it is required that Ultimate Control is totally closed. Then, just run the "uninstall" script with superuser priviledges:

sudo sh uninstall

OTHER CONSIDERATIONS:
********************

Ultimate Control Agent is a Java based program. It is packed in a jar file wich is located in the "lib" folder and named "UControl.jar". It is possible to run it using the following command:

java -jar ucontrol.jar

