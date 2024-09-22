#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         string s;
         cin>>s;
         int ct_1=0,ct_0=0;
         int x=sqrt(n);
         for(int i=0;i<n;i++){
            if(s[i]=='1') ct_1++;
            else ct_0++;
         }
         if(ct_1==4*(x-1) and ct_0==x*x-4*(x-1)) cout<<"Yes"<<'\n';
         else cout<<"No"<<'\n';
   }
}