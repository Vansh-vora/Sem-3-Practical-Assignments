#Write a shell script that locates the binary , source and manual page files for a command
echo "enter a command:"
read command
echo "Binary"
which "$command"
echo "source"
type -p "$command"

echo "Manual"
man -w "$command"