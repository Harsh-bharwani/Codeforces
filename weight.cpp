#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

         int d,x,y, ct=0;
         float discount=(1.0*d*x)/100;
         cin>>d>>x>>y;
         if(y>=x){
            cout<<0<<'\n';
         }
         else {
            if(x>(y*discount)) cout<<-1<<'\n';
            else{
               while(y<x && y>0 && x>0){
                   y--;
                   x-=discount;
                   ct++;
               }
               cout<<ct<<'\n';
            }
         }
   }
}