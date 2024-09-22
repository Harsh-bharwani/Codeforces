#include<stdio.h>
#include<stdlib.h>

    void reverse(int* ptr,int* n)
      { 
ptr=malloc(*ptr*sizeof(char));
for(int i=n-1;i>=0;i--) printf("%d",*(ptr+i));

    }
    void main(){int n;
    scanf("%d",&n);
    int a[n];
    reverse(&a,&n);

    }