# Write a shell script to accept two strings from user and check if both strings are equal or not

read -p "enter one string:" one
read -p "enter second string:" two

if [ $one -eq $two ];
then
    echo "both are eqaul"
else
    echo "NOt equal"
fi