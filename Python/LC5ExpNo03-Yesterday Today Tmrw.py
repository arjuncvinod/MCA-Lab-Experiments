from datetime import  datetime,timedelta

today=datetime.today()
yesterday=datetime.today()-timedelta(1)
tomorrow= datetime.today()+timedelta(1)

print("Yesterday: ",yesterday.strftime("%x"))
print("Today: ",today.strftime("%x"))
print("tomorrow: ",tomorrow.strftime("%x"))
