#Write a shell script to execute following commands-


#• How would u display the hidden files?
    ls -ld .?*
#• How delete directory with files?

    echo "To delete the directory"
    echo "1) Delete an existing dir"
    echo "2) Delete an temp dir"

    read opr
    case $opr in
    "1")
        echo "Enter the name of directory"
        read dir
        rm -rf $dir
        ;;
    "2")
        echo "Enter the name of directory"
        read dir
        mkdir $dir
        rm -rf $dir
        echo "Deleted Successfully"
        ;;
    esac

#• Explain two functionality of “mv” command with example?

    echo "To move a file to another file"
    echo "1)To move existing file"
    echo "2)To move temporary file by creating"
    read opr

    case $opr in 
    "1")
        echo "Enter the name of file:"
        read file
        echo "Enter the name of directory"
        read dir
        mv $file $dir
        ;;
    "2")
        echo "Enter name of file to create"
        read file
        touch $file
        echo "Enter name of temp directory"
        read dir
        mkdir $dir
        mv $file $dir
        ;;
    esac

    echo "Tempfile $file stored into temp $dir"