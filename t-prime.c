#include<stdio.h>
#include<math.h>
int main(){
    int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{int count=0;
scanf("%d",&arr[i]);
for(int j=2;j<=sqrt(arr[i]);j++)
    {
if(arr[i]%j==0)
count++;
}
if(count==1) printf("YES\n");
else printf("NO\n");
}
return 0;
}
