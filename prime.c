#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int is_prime[n];
    for(int i=0;i<n;i++)
    {
        is_prime[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
for(int j=i*i;j<=n;j+i){
    is_prime[j]=0;
}
    for(int i=0;i<n;i++){
    
    if(is_prime[i]!=0) printf("%d\n",is_prime[i]); 
    }

}
}