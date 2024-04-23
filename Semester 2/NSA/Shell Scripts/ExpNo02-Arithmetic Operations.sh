echo "Enter first number:"
read num1
echo "enter second number:"
read num2
sum=$((num1+num2))
echo "sum:$sum"
difference=$((num1-num2))
echo "Difference:$difference"
product=$((num1*num2))
echo "Product:$product"
if [ $num2 -eq 0 ]; then
echo "cannot divide by zero"
else 
echo "Quotient:$((num1/num2))"
fi