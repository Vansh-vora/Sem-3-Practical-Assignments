#Write a shell script to find volume of cube. (side*side*side).
#Write a shell script to accept the temp in Celsius and convert it into Fahrenheit(c=F-32/1.8)

echo "1.find Cube"
echo "2.f to c"
read -p "Enter the operation you want:" opr

case $opr in
1) read -p "enter the side:" side
    echo "the vol of cube is:$(($side * $side * $side))" ;;
2) read -p "enter the cel:" fhr
cel=$((($fhr - 32)/(9/5)))
echo $cel
;;
esac