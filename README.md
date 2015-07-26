#equinode

*equinode* is an interactive audio and visual installation. Visitors to the gallery can manipulate and control audio and lighting when they step onto the platform. Through *equinode* they work toward finding a balance--and equilibrium--between chaotic sounds and corruscating lighting.

## Software prerequisites

Pd-extended: mrpeach for UDP connection; comport for connecting with Arduino
python 2.7
run: sudo apt-get install python-bluez python-gobject bluez 

## Connecting wii balance board

1) Pair Wii Balance board with computer
2) Make sure that Wii Balance board has been disconnected from computer. This has to be done using the bluetooth manager on the computer.
3) Run the 'wiiBalance.py' script ( $ python wiiBalance.py)
4) Follow the onscreen instructions to sync the wii balance board with the script.
5) Hey presto!

## Sending wii balance sensor data to Pd

The script sends sensors sensor data on a local host over UDP. The receiving Pd patch must be listening on port 5005.
1) Open Pd-extended
2) Open wiiBalanceReceive.pd
