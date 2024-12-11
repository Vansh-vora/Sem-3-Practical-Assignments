#. Write a shell script for a simple calculator to perform addition, subtraction, multiplication,
#division using case statements

read -p "enter first number:" a
read -p "enter second number:" b

echo "1.Add"
echo "2.sub"
echo "3.mul"
echo "4.div"
read -p "enter the operation you want" opr

case $opr in 
1)
    echo "Addition is:$(($a + $b))"
    ;;
2)
    echo "Subtration is:$(($a-$b))"
    ;;
3)
    echo "Multiplication is:$(($a*$b))"
    ;;
4)
    echo "Division is:$(($a/$b))"
    ;;
esac