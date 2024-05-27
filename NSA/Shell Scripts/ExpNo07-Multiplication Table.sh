echo "Enter a number:"
read n
echo "Multiplication table for $n"
for ((i=1;i<=10;i++))
do
result=$((n*i))
echo "$n * $i = $result"
done