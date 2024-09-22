#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        a+=x;
        b+=y;
        c+=z;

    }
    if(a==0 && b==0 && c==0)
    printf("YES");
    else printf("NO");

}