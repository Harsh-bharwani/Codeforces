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
               cin>>v[i];
         }
         vector<int> prefix(n), suffix(n);
         prefix[0]=v[0];
         for(int i=1;i<n;i++){
            prefix[i]=v[i]+prefix[i-1];
         }
         suffix[0]=v[n-1];
         for(int i=1;i<n;i++){
            suffix[i]=v[n-1-i]+suffix[i-1];
         }
         reverse(suffix.begin(), suffix.end());
         int ways=0;
         for(int i=0;i<n;i++){
            if(abs(prefix[i]-suffix[i])==0 and v[i]==0){
                ways+=2;
            }
            else if(abs(prefix[i]-suffix[i])==1 and v[i]==0){
                ways+=1;
            }
         }
         cout<<ways<<'\n';
         
   }
}