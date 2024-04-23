echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
echo "Enter third number;"
read num3
largest=$num1
if [ $num2 -gt $largest ]; then
largest=$num2
fi
if [ $num3 -gt $largest ]; then
largest=$num3
fi
echo "Largest number is:$largest"