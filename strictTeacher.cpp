#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n,m,q;
         cin>>n>>m>>q;
         vector<int> v(m);
         for(int i=0; i < m; i++){
               cin>>v[i];
         }
         while(q--){
            int pos;
            cin>>pos;
            if(abs(pos-v[0])==1 and abs(pos-v[1])==1) cout<<1<<'\n'; 
            else if(pos<v[0]){
                if(pos<v[1]) cout<<min(v[0],v[1])-1<<'\n';
                else{
                    cout<<v[0]-v[1]-2<<'\n';
                }
            }
            else{
                if(pos>v[1]){
                    cout<<n-max(v[0], v[1])<<'\n';
                }
                else{
                    cout<<v[1]-v[0]-2<<'\n';
                }
            }
        }
    }
}