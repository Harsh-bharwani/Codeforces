#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int> v(n);
         for(int i=0; i < n; i++){
               vector<char> input(4);
               for(int j=0;j<4;j++){
                cin>>input[j];
                if(input[j]=='#') v[i]=j+1;
               }
         }
         for(int i=0;i<n;i++){
            cout<<v[n-1-i]<<' ';
         }
         cout<<'\n';
   }
}