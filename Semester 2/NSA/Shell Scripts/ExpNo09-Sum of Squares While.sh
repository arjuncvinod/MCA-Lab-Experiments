echo "Enter a number:"
read n
sum=0
count=1
while [ $count -le $n ]; do
square=$((count*count))
sum=$((sum+square))
count=$((count+1))
done
echo "Sum of squares of first $n numbers is:$sum"