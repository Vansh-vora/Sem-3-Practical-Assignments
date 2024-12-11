#Write a shell script to create menu driven for the following task -
#ping a network

echo "\n select an option:"

echo "1. retrieve dns name servers"
echo "2. check the mount version"
echo "3. display all the running jobs"
echo "4. display process not assosciated with terminal"

read -p "select a number :" num

case $num in
1)
    cat /etc/resolv.conf | grep nameserver
    ;;
2)
    mount -V
    ;;
3)
    jobs -l
    ;;
4)
    ps -aux |awk '$7 == "?" {print}'
esac