while true; do
echo "Menu:"
echo "1.Sum"
echo "2.Difference"
echo "3.Product"
echo "4.Quotient"
echo "5.Exit"
echo "Enter your choice:"
read choice
case $choice in
1)
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
sum=$((num1+num2))
echo "sum:$sum"

;;
2)
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
res=$((num1-num2))
echo "Difference:$res"
;;
3)
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
res=$((num1*num2))
echo "Product:$res"
;;
4)
echo "Enter first number:"
read num1
echo "Enter second number:"
read num2
if [ $num2 -eq 0 ]; then
echo "cannot divide by zero"
else 
echo "Quotient:$((num1/num2))"
fi
;;
5)
echo "exiting"
exit 0
;;
*)
echo "invalid choice"
;;
esac
done