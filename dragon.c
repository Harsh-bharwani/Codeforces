#include<stdio.h>
int main(){
    int k,l,m,n,d;
scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
int count=0;
for(int i=1;i<=d;i++)
{
    if(i%k==0) count++;
    else if(i%l==0) count++;
    else if(i%m==0) count++;
    else if(i%n==0) count++;
    else count+=0;
}
printf("%d",count);

return 0;
}
