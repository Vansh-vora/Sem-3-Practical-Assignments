#. Write a shell script to find biggest of two numbers.

read -p "enter one number:" one
read -p "enter second number:" two

if [ $one -gt $two ];
then
    echo "first is bigger"
else
    echo "second is bigger"
fi