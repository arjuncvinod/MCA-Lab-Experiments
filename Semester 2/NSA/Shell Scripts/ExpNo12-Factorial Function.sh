factorial() {
if [ $1 -eq 0 -o $1 -eq 1 ]; then
 echo 1
else
 local temp=$(($1-1))
 local res=$(factorial $temp)
 echo $(( $1 * $res ))
fi 
}

echo "Enter a number:"
read num
res=$(factorial $num)
echo "Factorial of $num is:$res"