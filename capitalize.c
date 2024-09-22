#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    gets(s);
    int lower=0,upper=0;
    for(int i=0;s[i]!='\0';i++)
    {
if(s[i]>='a' && s[i]<='z') lower+=1;
if(s[i]>='A' && s[i]<='Z') upper+=1;
    }
     for(int i=0;s[i]!='\0';i++){
if(lower>=upper && s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
if(upper>lower && s[i]<='z' && s[i]>='a') s[i]=s[i]-32;
    }
    
    puts(s);
return 0;
}
  