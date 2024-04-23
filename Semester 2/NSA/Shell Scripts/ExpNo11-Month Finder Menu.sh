while true; do
echo "Menu:"
echo "1,2,3,4,5,6,7,8,9,10,11,12" 
echo "13.Exit"
echo "Enter a number:"
read choice
case $choice in
1)
echo "Month:January"
;;
2)
echo "Month:February"
;;
3)
echo "Month:March"
;;
4)
echo "Month:April"
;;
5)
echo "Month:May"
;;
6)
echo "Month:June"
;;
7)
echo "Month:July"
;;
8)
echo "Month:August"
;;
9)
echo "Month:September"
;;
10)
echo "Month:October"
;;
11)
echo "Month:November"
;;
12)
echo "Month:December"
;;
13)
echo "Exiting"
exit 0
;;
*)
echo "Invalid choice"
;;
esac
done