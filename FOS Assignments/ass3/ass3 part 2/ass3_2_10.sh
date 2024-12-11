# Write a shell script to sort student file according to name and store it in another file.
cat student.txt

sort -t '|' -k 2,2 student.txt >demo.txt
cat demo.txt