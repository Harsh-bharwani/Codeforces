t=int(input())
for i in range(t):
    n=int(input())
    s=[0]*n
    p=[0]*n
    count=0
    s=input()
    q=2*s
    for k in range(n+1):
        p=q[k:n+k]
        print(p)
        if(p!=s and p!=s[::-1]):
                count+=1
    print(count+1)
    