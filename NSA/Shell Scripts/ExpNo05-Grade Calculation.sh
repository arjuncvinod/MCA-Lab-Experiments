echo "Enter the first mark:"
read mark1
echo "Enter the second mark:"
read mark2
echo "Enter the third mark:"
read mark3
average=$(((mark1+mark2+mark3)/3))
echo "Average:$average"
if [ $average -ge 90 ]; then
echo "Grade:S"
elif [ $average -ge 80 ]; then
echo "Grade:A"
elif [ $average -ge 60 ]; then
echo "Grade:B"
elif [ $average -ge 40 ]; then
echo "Grade:P"
else
echo "Grade:F"
fi