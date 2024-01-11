import calendar
year=int(input("Enter a year: "))
if calendar.isleap(year):
	print("leap year")
else:
	print("Not a Leap year")
