#Write a shell script to create a file with following contents:
#No Item_Name Quantity Price
#1 Pen 45 $3.45
#2 Pencil 25 $2.45
#3 Eraser 5 $4.45
#4 Pen 25 $3.45
#5 Stapler 15 $1.45
#6 Pen 30 $3.45
#Diplay all the Records starting with 'P' character. 
#Count all records having quantity =25 
#Display the record with maximum price

touch Q4.txt

echo "Diplay all the Records starting with 'P' character."
grep P Q4.txt

echo "Count all records having quantity =25"
awk '$3==25{count++} END {print count}' Q4.txt

echo "Display the record with maximum price"
awk 'NR>1{if($4>max) {max=$4;line=$0}} END {print line}' Q4.txt
