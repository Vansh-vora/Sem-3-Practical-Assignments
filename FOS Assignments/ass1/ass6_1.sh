# Write a shell script to display the following menu and acts accordingly:
#i. Calendar of the current month and year.
#ii. terminal type
#iii. User name, Users home directory.
#iv. current month
#v. Machine name.

echo "i. Calendar of the current month and year."
echo "ii. terminal type"
echo "iii. User name, Users home directory."
echo "iv. current month"
echo "v. Machine name."

read opr

case $opr in
"1")
    echo "Calender of the month is:"
    cal
    ;;
"2")
    $TERM
    ;;
"3")
    $HOME
    ;;
"4")
    cal
    ;;
"5")
    hostname
    
esac