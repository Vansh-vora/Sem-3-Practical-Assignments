echo "Enter the number:" 
read num

n=$num
res=0
rem=0

while [ $num -ne 0 ]; do
	rem=$((num % 10))
	
	res=$((res + (rem * rem * rem)))
	num=$((num / 10))
done
if [ $n -eq $res ]; then
	echo "The number is Armstrong"
else
	echo "The number is not Armstrong"
fi