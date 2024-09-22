#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf("%d%d",&n,&t);
    char s[50];
    gets(s);
    for(int i=1;i<=t;i++)
    {for(int i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G') 
        {int temp=0;
            temp=s[i];
            s[i]=s[i+1];
            s[i+1]=temp;
            i++;}
    }
    }
    puts(s);
    return 0;
}
  