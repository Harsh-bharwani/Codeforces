#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int l,r;
         cin>>l>>r;
         int ct=0;
         for(int i=1;l<=r;i++){
            l+=i;
            ct++;
         }
         cout<<ct<<'\n';
   }
}