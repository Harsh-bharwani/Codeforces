#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aabaab!bb";     
    int count=0;
    map<char,int> vis;
    for(int i=0;i<s.size();i++){
        // if (vis.find(s[i])!=vis.end())
        if(vis.find(s[i])!=vis.end())
        {   int size=vis.size();
            count=max(size,count);
            for(int j=0;j<vis[s[i]];j++){
                vis.erase(s[j]);
            }
        }         
        vis[s[i]]=i;
        
    }
    if(vis.size()>0){
        int size=vis.size();
        count=max(size,count);
    }
    std::cout<< count;
}

    