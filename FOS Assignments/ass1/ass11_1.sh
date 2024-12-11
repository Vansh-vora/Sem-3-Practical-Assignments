# Write a shell script to find biggest of three numbers

echo "enter 1 number:"
read a
echo "enter 2 number"
read b
echo "enter 3 number"
read c

largest=$a

if [ $b -gt $largest ];
then 
    largest=$b

if[ $c -gt $largest ];
then
    largest=$c
fi
fi

echo "the large is:$largest"