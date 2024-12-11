#. Write a shell script to execute following commands-
#• How would u display the hidden files?
    ls -ld .?*
    echo
#• How delete directory with files?
     echo "To delete the directory"
    echo "1) Delete an existing dir"
    echo "2) Delete an temp dir"

     read opr
    case $opr in
    "1") read -p "enter the name of directory:" dir
        rm -rf $dir ;;
    "2") read -p "enter the name of directory:" dir
        mkdir $dir
        rm -rf $dir;;
    esac
#• Explain two functionality of “mv” command with example?
     echo "To move a file to another file"
    echo "1)To move existing file"
   
        echo "Enter the name of file:"
        read file
        echo "Enter the name of directory"
        read dir
        mv $file $dir
