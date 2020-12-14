ifconfig | grep ether | sed 's/ether //' | sed 's/ //' | cut -f 2-3
