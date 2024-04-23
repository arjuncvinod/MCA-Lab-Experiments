fibonocci() {
n=$1
a=0
b=1
count=1
echo "Fibonocci sequence upto $n:"
echo -n "$a"
while [ $count -lt $n ]; do
echo -n "$b"
temp=$b
b=$((a+b))
a=$temp
count=$(($count+1))
done
echo
}

echo "Enter the limit:"
read l
fibonocci $l