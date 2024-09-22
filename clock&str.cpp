#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((min(a,b)<c && c<max(a,b) || min(a,b)<d && d<max(a,b)) && ( (max(a,b)<c && c<=12) || (1<=c && c<min(a,b)) ||(max(a,b)<d && d<=12) || (1<=d && d<min(a,b)) )){
         cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

}
}