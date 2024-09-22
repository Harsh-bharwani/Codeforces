#include<stdio.h>
long fb(long n){
    for(int i=0;i<n;i++)
    {if(n==0 || n==1) return 1;
    else return fb(i)+fb(i-1);
}
}
int main()
{
fb(12);

return 0;
}