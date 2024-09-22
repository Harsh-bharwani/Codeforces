#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<long long> v(n);
         long long ans=LONG_MIN;
         for(int i=0; i < n; i++){
            cin>>v[i];
         }
         vector<long long> prefix_max(n);
         vector<long long> suffix_max(n);
         prefix_max[0]=v[0]+0;
         for(int i=1;i<n;i++){
            prefix_max[i]=max(prefix_max[i-1], v[i]+i);
         }
         suffix_max[n-1]=v[n-1]-n-1;
         for(int i=n-2;i>=0;i--){
            suffix_max[i]=max(suffix_max[i+1], v[i]-i);
         }
         for(int i=1;i<(n-1);i++){
            ans=max(ans, v[i]+ prefix_max[i-1] + suffix_max[i+1]);
         }
         cout<<ans<<'\n';
   }
}