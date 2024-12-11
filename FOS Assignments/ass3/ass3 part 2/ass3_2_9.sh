# Write a shell script to perform following task on student file and emp file
    cat student.txt
    echo
    cat emp.txt
    echo

echo "a. display the student who get highest marks."
sort -t '|' -k 4,4 -r student.txt | head -1
echo 
echo "b. display the student who get lowest marrks:"
sort -t '|' -k 4,4 student.txt | head -1
echo
echo "c. display the emp who get highest salary:"
sort -t '|' -k 4,4 -r emp.txt | head -1
echo  
echo "d. display the emp who get lowest salary:"
sort -t '|' -k 4,4 emp.txt | head -1