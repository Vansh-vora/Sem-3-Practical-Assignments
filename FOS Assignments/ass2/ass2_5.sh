#Write a shell script to check if the number is prime or not. Make use of break keyword.

read -p "enter the number to check that it is prime or not:" num

flag=1

for ((i=2 ; i<=(num / 2) ; i++));
do  
    if [ $((num % i)) -eq 0 ];
    then
        flag=0;
        break;
    fi
done

if [ $flag -eq 0 ];
then
    echo "the $num is prime"
else
    echo "the $num is not prime"
fi