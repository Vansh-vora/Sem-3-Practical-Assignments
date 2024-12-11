#Write a shell script to find factorial of a number

read -p "enter a number to find its factorial:" num

fact=1
i=1

while [ $i -le $num ];
do  
    fact=$((fact *i))
    i=$((i+1))
done    
echo "the factorial is: $fact"
