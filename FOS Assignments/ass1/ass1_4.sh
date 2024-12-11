# Write a script to calculate gross salary. ( DA = 60%OF BASIC, HRA = 20%
#OF BASIC, MA = 100 and IT = 15% of BASIC)
read -p "enter the basic salary:" sal

da=$(echo "scale=2; $sal*60/100" | bc)
hra=$(echo "scale=2; $sal*20/100" | bc)
ma=100
it=$(echo "scale=2;$sal*15/100" | bc)

gross=$(echo "$sal +$da+$hra+$ma+$it" |bc)

echo "Your Gross Salary is $gross"