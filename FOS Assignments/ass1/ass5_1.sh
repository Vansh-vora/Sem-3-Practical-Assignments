# Write a shell script to execute following commands


#• Create a file called text and store name,age and address in it.
    touch text

    echo "\n Enter the name"
    read name

    echo "\n Enter the age"
    read age

    echo "\n Enter the add"
    read add

    echo "Name:$name\nAge:$age\nAdd:$add">text
#• Display the contents of the file text on the screen.
    cat text
#• Display version of operating system.
    uname -a