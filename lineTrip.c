#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,x;
        scanf("%d%d",&n,&x);
        char a[n];
        gets(a);
        int maxm=0;
        if (a[0]>(x-a[n-1]*2))
        maxm=a[0];
        else maxm=x-a[n-1]*2;
        for(int i=0;i<n-1;i++){
          if(a[i+1]-a[i]>maxm)
          maxm=a[i+1]-a[i];
        }
        print(maxm);


    }
}