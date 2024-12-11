# Write a script to calculate gross salary. ( DA = 60%OF BASIC, HRA = 20%
#OF BASIC, MA = 100 and IT = 15% of BASIC)

read -p "Enter the basic Salary:" basic

da=$(echo "scale=2; $basic*60/100" | bc)
hra=$(echo "scale=2;$basic*20/100" | bc)
ma=100
it=$(echo "scale=2;$basic*15/100" | bc)

gross=$(echo "$basic +$da+$hra+$ma+$it" |bc)

echo "Your Gross Salary is $gross"