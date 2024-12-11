#Perform the following commands to locate or search the files.
#• Find files using name in the Current Directory
echo "enter the file name to search:"
read filename
find -type f -name "$filename"
echo 
#• Find directories using name
    echo "enter the directory name to search:"
    read dirname
find -type d -name "$dirname"
#• Find C files and .txt using name
find -type f \( -name "*.c" -o -name "*.txt" \)
#• Find all files with paricular extension
find -type f -name ".$extension"
#• Find all files with starting with A-Z capital letters.
find -type f -name "[A-Z]"
#• Find files with read ,write and execute permission.
find -type f -perm /111
#• Find files without read ,write and execute permission.
find -type f ! -perm /111
#• Find Read Only files
find -type f -perm /444
#• Find Read & Write Files
find -type f -perm /644
#• Find all Hidden Files.
find -type f -perm "/.*"