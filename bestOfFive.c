#include<stdio.h>
#include<string.h>
// char max(int a,int b){
//     if(a>=b) return 'A';
//     else return 'B';
// }
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int countA=0;
        int countB=0;
        char str[6];
        for(int i=0;i<5;i++){
            scanf("%c",&str[i]);
        }
        for(int i=0;i<6;i++){
            if(str[i]=='A') countA++;
            else countB++;
        }
        printf("%d\n%d",countA,countB);
        puts(str);
    //    if(countA>=countB) printf("A\n");
    //    else printf("B\n");
    }
}