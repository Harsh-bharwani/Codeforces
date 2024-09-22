#include<stdio.h>
#include<stdbool.h>
bool is_vow(char c){
  return (c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u');
}
int main(){
  int n;
  scanf("%d",&n);
    char a[n];
    int count=0;
for(int i=0;i<n;i++){
  scanf("%c",&a[i]);
   count+=is_vow(a[i]);
}
printf("%d",count);
}


  