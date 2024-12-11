#Write a shell script to read number from user and print its multiplication table

read -p "enter a number to get its MUltiplication table:" num

i=1
while [ $i -le 10 ];
do  
     echo "$num * $i = $((num*i))"
     i=$((i+1))
done 
