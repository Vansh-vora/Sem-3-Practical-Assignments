#Write a shell script to create a file with following contents:
cat <<EOF >f2.txt
No Item_Name Quantity Price
1 Pen 45 $3.45
2 Pencil 25 $2.45
3 Eraser 5 $4.45
4 Pen 25 $3.45
5 Stapler 15 $1.45
6 Pen 30 $3.45
EOF

echo "Diplay all the Records starting with 'P' character."
grep "P" f2.txt
echo
echo "Count all records having quantity =25:"
count=$(awk '$3 == 25 {count++} END {print count}' f2.txt)
echo
echo "No: $count"
echo
echo "Display the record with maximum price"
highest=$(awk 'NR>1 {print $0, substr($4,2)}' f2.txt | sort -k 5,5 -r | head -1)
echo $highest