#display MAC addresses on computer (on mine it was ETHER)
#awk {print $2} prints the second field of the line
ifconfig -a | grep ether | awk '{print $2; "\n"}';

