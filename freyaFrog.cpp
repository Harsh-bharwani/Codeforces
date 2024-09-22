#include<bits/stdc++.h>
using namespace std;
int gif(int n, int k){
    if(n%k==0) return n/k;
    else return n/k +1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int x,y,k;
         cin>>x>>y>>k;
         int ct=0;
         while(x>0 || y>0){
            x-=k;
            ct++;
            if(x>0 || y>0){
                y-=k;
                ct++;
            }
         }
        cout<<ct<<'\n';
   }
}