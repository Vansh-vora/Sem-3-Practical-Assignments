#Write a shell script to display message good morning / good afternoon / good evening/ good 
#night according to the time

read -p "enter the time(24 hours):" time

if [ $time -ge 0 -a $time -le 10 ];
then
    echo "Good Morning!"
fi
if [ $time -ge 11 -a $time -le 15 ];
then    
    echo "Good Afternoon!"
fi
if [ $time -ge 16 -a $time -le 19 ];
then 
    echo "Good Evening"
fi
if [ $time -ge 20 -a $time -le 24 ];
then
    echo "Good Night"
fi