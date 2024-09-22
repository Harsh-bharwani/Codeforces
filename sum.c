#include<stdio.h>
int print(int n){
    if(n<10) return n;
    int result=n%10+print(n/10);

    return result;
}
int main(){
    int n;
scanf("%d",&n);
    printf("%d",print(n));

}

  