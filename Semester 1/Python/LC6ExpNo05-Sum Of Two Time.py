from datetime import datetime, timedelta

class Time:
    def __init__(self, hour, minute, sec):
        self.__hour = int(hour)
        self.__min = int(minute)
        self.__sec = int(sec)

    def __add__(self, other):
        time1 = datetime.strptime(f"{self.__hour:02d}:{self.__min:02d}:{self.__sec:02d}", '%H:%M:%S')
        time2 = timedelta(hours=other.__hour, minutes=other.__min, seconds=other.__sec)
        result_time = time1 + time2
        return result_time.time()

print("First Time")
hour_input = input("Enter the hour:")
minute_input = input("Enter the minute:")
second_input = input("Enter the second:")
T1 = Time(hour_input, minute_input, second_input)

print("Second Time")
hour_input = int(input("Enter the hour:"))
minute_input = int(input("Enter the minute:"))
second_input = int(input("Enter the second:"))
T2 = Time(hour_input, minute_input, second_input)

T3 = T1 + T2

print("Addition of T1 and T2 is:", T3.strftime('%H:%M:%S'))