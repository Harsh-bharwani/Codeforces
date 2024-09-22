#include<stdio.h>
int main(){
    int x,a,b,c,d,result;
    scanf("%d",&x);

    for(int i=x+1;i<9000;i++){
                a=i/1000;
    int temp=i%1000;
    b=temp/100;
    temp=i%100;
    c=temp/10;
    temp=i%10;
    d=temp;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
         result=i;
         break;
        }
         }
         printf("%d",result);
    return 0;
}