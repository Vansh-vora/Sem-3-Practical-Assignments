echo "Enter the number: " 
read num

n=$num
rev=0
rem=0

while [ $num -ne 0 ]; do
	rem=$((num % 10))
	
	rev=$(((rev * 10) + rem))
	num=$((num / 10))
done
if [ $n -eq $rev ]; then
	echo "The number is palindrome"
else
	echo "The number is not palindrome"
fi