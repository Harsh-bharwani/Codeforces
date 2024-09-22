#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t); 
    int count=0;

    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
   for(int i=2;i<n;i++)
   {
    if(n%i==0 && i%2!=0)
    count++;
   }
    }
    if(count==0) printf("NO");
    else printf("YES");
}