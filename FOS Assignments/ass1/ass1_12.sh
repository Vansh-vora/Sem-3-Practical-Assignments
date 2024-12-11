# Write a shell script for a simple calculator to perform addition, subtraction, multiplication,
#division using case statements

read -p "enter one number:" one
read -p "enter two number:" two

echo "Choose an Option:"
echo "1.Add"
echo "2.sub"
echo "3.mul"
read -p "choose:[1-3]:" num

case $num in
1) echo "Add:$(($one + $two))" ;;
2) echo "sub:$(($one - $two))" ;;
3) echo "mul:$(($one * $two))" ;;
esac