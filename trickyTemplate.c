#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
      scanf("%d",&n);
      char a[100];
      char b[100];
      char c[100];
      gets(a);
            gets(b);
                  gets(c);
                  
if(a[i]==b[i] && b[i]!=c[i]) printf("YES");
else {if(a[i]!=c[i] && b[i]!=c[i]) printf("YES");
else printf("NO");
}
    }
}
