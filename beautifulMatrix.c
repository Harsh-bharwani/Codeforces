#include<stdio.h>
int main()
{int a[5][5];
int m=0,n=0;
int count =0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        if(a[i][j]==1) {m=i;
n=j;
    }
        }
}
if(m<=2) count=2-m;
else count=m-2;

if(n<=2) count+=2-n;
else count+=n-2;
printf("%d",count);
return 0;
}