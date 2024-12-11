# An employee Basic salary is input through keyboard where da is 40% of basic salary and hra is 
#20% of basic salary. Write a program to calculate gross salary

read -p "enter basic salary of an employee:" basic

da=$(echo "scale=2; $basic*40/100" |bc)
hra=$(echo "scale=2; $basic*20/100" |bc)

gross=$(echo "scale=2; $basic + $da+$hra" |bc)

echo "The salary is: $gross"
