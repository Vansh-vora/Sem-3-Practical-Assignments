#Write a shell script to perform following task on emp file
touch emp.txt
cat emp.txt
echo 
#a. display eno,ename and city from emp file
cut -d '|' -f 1,2,3 emp.txt
echo
#b. display ename like only 2 character should display in one line
cut -d '|' -f 2 emp.txt | sad 's/../&\n/g'
echo 
#c. display ename in capital latters from emp file
cut -d '|' -f 2 emp.txt | tr 'a-z' 'A-Z'
echo

#d. display emp file with tab delimeters.
cat emp.txt | tr '|' '\t'
echo