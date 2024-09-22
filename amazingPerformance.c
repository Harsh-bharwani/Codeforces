#include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {
scanf("%d",&score[i]);}
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
if(score[i]>score[j]) count++;
}
}
printf("%d",count);
 
 }

    
