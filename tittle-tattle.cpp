#include<bits/stdc++.h>
using namespace std;
void dfs(int node, long long &mn, vector<vector<long long>> &friends, vector<long long> &cost, vector<bool> &vis){
    for(auto ele : friends[node]){
        if(!vis[ele]){
            vis[ele]=true;
            mn=min(mn,cost[ele]);
            dfs(ele,mn,friends,cost,vis);
        }
    }
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    vector<long long> cost(n+1);
    for(int i=1; i <= n; i++){
        cin>>cost[i];
    }
    vector<bool> vis(n+1, false);
    vector<vector<long long>> friends(n+1);
    for (int i = 0; i < m; i++){
        int x,y;
        cin>>x>>y;
        friends[x].push_back(y);
        friends[y].push_back(x);
    }
    long long ans=0;

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=true;
            long long mn=cost[i];
            dfs(i, mn, friends,cost, vis);
            ans+=mn;
        } 
    }
    cout<<ans<<'\n';
}

