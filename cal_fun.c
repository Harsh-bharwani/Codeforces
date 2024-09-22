#include<stdio.h>
#include<math.h>
int function(int n){
    if(n==1) return -1;
    else if(n<=0) return 0;
    return pow(-1,n)*n +function(n-1);
}
int main()
{
int n;
scanf("%d",&n);
int res=function(n);
printf("%d\n",res);

}