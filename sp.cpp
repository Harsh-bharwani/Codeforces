#include<bits/stdc++.h>
using namespace std;
bool perfectSq(long long n){
    long long temp=sqrtl(n);
    return temp*temp==n;
}
bool check(long long x, long long D){
    return (x%2+D%2)%2==0;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int> v(n);
         map<int, long long> freq;
         for(int i=0; i < n; i++){
            cin>>v[i];
            freq[v[i]]++;
         }
         int q;
         cin>>q;
         while(q--){
            long long  x,y;
            cin>>x>>y;
            long long D=x*x-4*y;
            if(D>0 and perfectSq(D) and check(x,D)) cout<<freq[(x+sqrt(D))/2]*freq[(x-sqrt(D))/2]<<' ';
            else if(D==0 and check(x,D)) cout<<freq[x/2]*(freq[x/2]-1)/2<<' ';
            else cout<<0<<' ';
         }
         cout<<'\n';
   }
}