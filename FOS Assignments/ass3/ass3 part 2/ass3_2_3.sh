#Write a shell script to create student file as follow and perform the task
#rno name city marks
cat emp.txt
echo
cat <<EOF >student.txt
rno|name|city|marks
1|Akash|Mumbai|85
2|Nisha|Delhi|78
3|Ravi|Bangalore|90
4|Megha|Chennai|88
5|Vikas|Pune|76
6|Sneha|Kolkata|9
EOF
echo

#a. display emp and student file horizontally
paste emp.txt student.txt
echo 

#b. display emp and student file sequence wise with tab delimeter.
paste emp.txt student.txt | tr '|' '\t'
echo  
#c. join emp and student file and display result.
join -t '|' -1 3 -2 3 emp.txt student.txt
echo
#d. sort marks in reverse order
sort -t '|' -k4 -nr student.txt
echo 