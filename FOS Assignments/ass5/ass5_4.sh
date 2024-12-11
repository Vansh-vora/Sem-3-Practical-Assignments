#Write a shell script to create menu driven for the following task
#a. display trobule shooting detail of network
#b. kill the process
#c. view all mounts
#d. display full format listing

echo "\n 1.display trobule shooting detail of network"
echo "\n 2.kill the process"
echo "\n 3.view all mounts"
echo "\n 4. display full format listing"

read -p "\n Enter the operation you want (1-4):" num

case $num in
1)
    ifconfig
    ;;
2)
    read -p "enter pid to kill" pid
    kill $pid
    ;;
3)
    mount
    ;;
4)
    ls -l
esac