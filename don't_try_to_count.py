t=(int(input()))
n=(int(input()))
m=(int(input()))
x=list(input())
s=list(input())

count=0

while(count<=5):
    x.append(x)
    if s in x:
        count+=1
if(count==6):
    print("-1")
else:
    print(count)