# Write a shell script to print odd numbers from 1 to 100 making use of until loop

echo "Printing odd NUmbers from 1-100"

i=1

until [ $i -gt 100 ];
do
    if [ $((i % 2)) -ne 0 ];
    then 
     echo -n " $i"
    fi
    i=$((i+1))
done
echo