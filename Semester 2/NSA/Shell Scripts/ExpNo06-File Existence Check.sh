if [ $# -eq 0 ]; then
echo "Please provide a filename as command line argument"
exit
fi
filename=$1
if [ -e "$filename" ]; then
echo "file $filename exists"
else
echo "file $filename does not exists"
fi