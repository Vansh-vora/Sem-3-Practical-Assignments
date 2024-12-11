# Create a file named “First_shell” using cat command. Check if this file is readable, writable and 
#executable or not. If it is not executable then make it executable and then list out all the files and see
#if it became execuatble

cat >First_Shell <<EOF

echo "Hello World"

EOF

ls -l First_Shell

[ -r First_Shell ] && echo "your file is readable" || echo "your file is not readable"
[ -w First_Shell ] && echo "your file is writable" || echo "your file is not readable"
[ -x First_Shell ] && echo "your file is readable" || echo "your file is not readable"
