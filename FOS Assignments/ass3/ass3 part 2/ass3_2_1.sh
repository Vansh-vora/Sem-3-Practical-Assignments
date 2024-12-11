#Write a shell script to create an emp file with following format and perform the following
#task
#eno|ename|city|salary

cat <<EOF >emp.txt
eno|ename|city|salary
101|John|Mumbai|50000
102|Priya|Delhi|60000
103|Amit|Gujrat|50000
104|Sara|Banglore|45000
105|Rahul|Pune|48000
106|Neha|Kolkata|62000
EOF

#a. display first 3 lines from emp file
head -n 3 emp.txt
echo
#b. display last 3 lines from emp file
tail -n 3 emp.txt
echo
#c. display emp file in sorted order
sort emp.txt
echo

#d. display eno and city from emp file
cut -d '|' -f 1,3 emp.txt