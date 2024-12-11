# Write a shell script to find biggest of two numbers

echo "enter the first name:"
read a
echo "enter the second name:"
read b

if [ $a -gt $b ];
then
echo "first is bigger"
else
echo "second is bigger"
fi