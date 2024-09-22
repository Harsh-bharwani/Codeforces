#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int a,b;
         cin>>a>>b;
         if(a==0){
            if(b%2==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
         }
         else if(b==0){
            if(a%2==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
         }
         else{
            int sum=a*1+ b*2;
            if(sum%2==0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
         }
   }
}