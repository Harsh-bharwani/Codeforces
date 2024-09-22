#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(y1==y2 ){
            if(x1==x2){
                cout<<"YES"<<'\n';
            }
            else if (y1<x1 or y2 >x2){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else if(x1<y1 and y2>x2){
            cout<<"No"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }

    }
}