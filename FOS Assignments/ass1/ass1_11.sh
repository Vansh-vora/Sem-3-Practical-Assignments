#Write a shell script to find biggest of three numbers.

read -p "enter one number:" one
read -p "enter second number:" two
read -p "enter third number:" third

largest=$one
if [ $two -gt $largest ];
then
    largest=$two
if [ $third -gt $largest ];
then
    largest=$third
fi
fi
echo "big:$largest"