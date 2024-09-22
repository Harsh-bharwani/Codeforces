#include<stdio.h>
int power(int a,int b,int m){
if(b==0) return 1;
if(b%2==0) {int even=power(a,b/2,m);
    return even*even%m;}
else{int odd=power(a,b/2,m);
    return (odd*odd*a)%m; 
}
}
int main()
{
    int a,b,m;
    scanf("%d%d%d",&a,&b,&m);
    printf("%d",power(a,b,m));
}