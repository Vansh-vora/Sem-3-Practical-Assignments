read -p "enter the number of rows you want:" row

echo "----------------*pyramid----------------"
for i in $(seq 1 $row);
do
    for j in $(seq 1 $i);
    do
        echo -n " *"
    done
    echo
done

echo "------------- * pyramid rev--------------"
for i in $(seq $row -1 1);
do
    for j in $(seq 1 $i);
    do
        echo -n " *"
    done
    echo
done

echo "--------------- I pyramid---------------"
for i in $(seq 1 $row);
do
    for j in $(seq 1 $i);
    do
        echo -n " $i"
    done
    echo
done

echo "--------------- I pyramid rev---------------"

for i in $(seq $row -1 1);
do
    for j in $(seq 1 $i);
    do
        echo -n " $i"
    done
    echo
done

echo "--------------- J pyramid---------------"

for i in $(seq 1 $row);
do
    for j in $(seq 1 $i);
    do
        echo -n " $j"
    done
    echo
done
echo "--------------- J pyramid rev---------------"
for i in $(seq $n -1 1);
do
    for j in $(seq 1 $i);
    do
        echo -n " $j"
    done
    echo
done
echo "-----------Factorial------------"
read -p "enter a number" num
fact=1
for i in $(seq 1 $num);
do
    fact=$((fact * i))
done
echo "Fact is:$fact"

echo "------------- Number Pyramid-------------"
count=1

for i in $(seq 1 $row);
do
    for j in $(seq 1 $i);
    do
        echo -n " $count"
        count=$((count + 1))
    done
    echo
done