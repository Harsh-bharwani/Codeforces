#include<stdio.h>
#include<math.h>
int main(){
    int n;
scanf("%d",&n);
    int prime[n];
    for(int i=0;i<n;i++){
for(int j=2;j<n;j++)
{
    if(n%i==0) prime[0]=i;
}
}
for(int i=0;i<n;i++)
{
    printf("%d",prime[i]);

}
}
