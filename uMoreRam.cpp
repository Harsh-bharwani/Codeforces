#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int count=0;
    while(!is_sorted(v.begin(),v.end())){
        int min_diff=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                count++;
                min_diff=min(min_diff,v[i+1]-v[i]);
            }
        }
    }
}
}