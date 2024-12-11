#Write a shell script to check if the number is prime or not. Make use of break keyword.

read -p "Enter the number to check prime or not:" prime



flag=1

for ((i=2 ; i<=(prime/2) ; i++));
do
    if [ $((prime % i)) -eq 0 ];
    then 
        flag=0
        break
    fi
done

if [ $flag -eq 0 ];
then
    echo "the $prime is prime"
else
    echo "the $prime is not prime"
fi

