#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
         if((a-b)!=1){
    printf("YES\n");}
    else printf("NO\n");
    }
   return 0;
}