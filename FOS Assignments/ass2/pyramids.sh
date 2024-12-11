
echo "enter the no of rows you want"
read n

echo "--------------- * pyramid---------------"
for i in $(seq 1 $n);
do
    for j in $(seq 1 $i);
    do
        echo -n " *"
    done
    echo
done
echo "--------------- * pyramid rev---------------"
for i in $(seq $n -1 1);
do
    for j in $(seq 1 $i);
    do
        echo -n " *"
    done
    echo
done
echo "--------------- I pyramid---------------"
for i in $(seq 1 $n);
do
    for j in $(seq 1 $i);
    do
        echo -n " $i"
    done
    echo
done
echo "--------------- I pyramid rev---------------"
for i in $(seq $n -1 1);
do
    for j in $(seq 1 $i);
    do
        echo -n " $i"
    done
    echo
done
echo "--------------- J pyramid---------------"
for i in $(seq 1 $n);
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
echo "---------------Factorial-----------"
echo "Enter a number:"
read num
fact=1
for i in $(seq 1 $num);
do
    fact=$((fact * i))
done
echo "Factorial of number is $fact"
echo "------------- Number Pyramid-------------"
count=1
for i in $(seq 1  $n);
do
    for j in $(seq 1 $i);
    do
    echo -n " $count"
    count=$((count + 1))
    done
    echo
done
echo "\n\n--------------------multiplication table--------------------\n\n";
echo "Enter a number"
read num
count=1
for i in $(seq 1 10); do
	echo "$num x $i = $((num * i))"
done
read -p "Enter the rows: " rows
count=2
echo "\n\n--------------------even pyramid--------------------\n\n";
for i in $(seq 1 $rows); do
	for j in $(seq 1 $i); do
		echo -n "$count "
		count=$((count + 2))
	done
	echo
done
count=1
echo "\n\n--------------------odd pyramid--------------------\n\n";
for i in $(seq 1 $rows); do
	for j in $(seq 1 $i); do
		echo -n "$count "
		count=$((count + 2))
	done
	echo
done
