#Write a shell script to create menu driven for the following task


echo "\n select an option"
echo "\n1. display dynamic real time view of running system"
echo "\n2. display full format list of processes"
echo "\n3. display your hostname on terminal"
echo "\n4. display routing table"

read -p "select an number (1-4):" num

case $num in
1) top ;;
2) ps -ef ;;
3) hostname ;;
4) route ;;
esac