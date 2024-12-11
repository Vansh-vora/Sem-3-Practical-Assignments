#Write a shell script to perform following task on student file
cat student.txt
echo
touch city.txt
touch marks.txt

echo "Select an Option:"

echo "1. cut city from student file and store it in new file:"
echo "2. cut rno and marks from student file and store it in marks file:"
echo "3. display the student who get highest marks:"
echo "4. display only numbers from student file:"
echo "5. Exit:"
read -p "Enter Choice:[1-5]:" choice

case $choice in
1) cut -f3 -d'|' student.txt >city.txt
    cat city.txt ;;
2) cut -f1,3 -d'|' student.txt >marks.txt
    cat marks.txt ;;
3) sort -t'|' -k4 -nr student.txt | head -1 ;;
4) grep -o '[0-9]\+' student.txt ;;
5) exit ;;
*) echo "Invalid" ;;
 esac