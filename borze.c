#include<stdio.h>
#include<string.h>
int main()
{
    
    char s[200];
   gets(s);
     for(int i=0;s[i]!='\0';i++)
    {  
        if(s[i]=='.')
      printf("0");
            else {if(s[i]=='-' && s[i+1]=='.')
            {printf("1");
            i=i+1;}
        else 
           {printf("2");
                  i=i+1;}

        }

    }
    return 0;
}




  