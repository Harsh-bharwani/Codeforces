# def power_of2(x):   #return the i
# print([1,2,3]-[1,2,3])

def sub_list(list1,list2):
    n=len(list1)
    l=[]
    for i in range(n-len(list2)):
        list2.append(0)
    for i in range(n):
        l.append(list1[i]-list2[i])
    return l

def greater_power(x):
    for i in range(30):
        if x-powers[i]<0:
            return i-1

def create_list(x):
    if x in powers:
        n=1
        for i in range(len(powers)):
            if powers[i]==x:
                n+=i
                break
        l=[0 for i in range(n-1)]
        l.append(1)
        temp.append(l)
        return 
    else:
        gp=greater_power(x)
        l=[0 for i in range(gp)]
        l.append(1)
        temp.append(l)
        create_list(abs(2**(gp)-x))

t=int(input())
for i in range(t):
    # flag=0
    temp=[]
    powers=[2**i for i in range(30)]
    x=int(input())
    if x in powers:
        n=1
        for i in range(len(powers)):
            if powers[i]==x:
                n+=i
                break
        l=[0 for i in range(n-1)]
        # print(l)
        l.append(1)
        temp.append(l)
        # print(temp)
    else:
        # gp=greater_power(x)
        for i in range(30):
            if x-powers[i]<0:
                gp=i-1
                break
        l=[0 for i in range(gp)]
        l.append(1)
        temp.append(l)
        create_list(abs(2**(gp+1)-x))
        temp[0].pop()
        temp[0].append(0)
        temp[0].append(1)
    # print(temp)
    if len(temp)==1:
        l=[]
        for i in range(len(temp[0])):
            l.append(str(temp[0][i]))
        s=" ".join(l)
        print(len(s))
        print(s)
    else:
        n=len(temp)
        ans=temp[0]
        l=[]
        for i in range(1,n):
            ans=sub_list(ans,temp[i])
        for i in range(len(ans)):
            l.append(str(ans[i]))
        s=" ".join(l)
        print(len(ans))
        print(s)

    


        

