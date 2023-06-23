import  requests

response=requests.get("https://psg-scapes-backend.onrender.com/api/timetable/schedule/week/22Z2")
print(len(response.json()[0]['periods']))
periods=[]
for i in range(0,8,1):
 #print(response.json()[0]['periods'][i]['course'])
 periods.append(response.json()[0]['periods'][i]['course'])
print(periods)