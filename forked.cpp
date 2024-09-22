#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        int ct=0;
        for(const auto &pair : freq){
            if(pair.second%2==1){
                ct++;
            }
        }
        if(ct<=1){
            if(k==0){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        else{
            -
        }
    }
}