decimalToBinary() {
decimal=$1
binary=""
while [ $decimal -gt 0 ]; do
remainder=$((decimal%2))
binary="$remainder $binary"
decimal=$((decimal/2))
done
echo $binary
}

echo "Enter a decimal number:"
read d
res=$(decimalToBinary $d)
echo "Binary repersentation=$res"