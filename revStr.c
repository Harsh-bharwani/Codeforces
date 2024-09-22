#include<stdio.h>
#include<string.h>
void rev(int n,char a[n]){
    if(n<0) return;
    printf("%c",a[n-1]);
   

}
int main(){
    int n;
scanf("%d",&n);
  char a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c",&a[i]);}
       rev(n,a[n]);  

}

  