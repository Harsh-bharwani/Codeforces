#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin>>n>>m;
cin.ignore();
string s;
string t;
getline(cin,s);
getline(cin,t);
vector <int>store;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(s[i]==t[j]){
            store.push_back(i);
        }
    }
}
for(int i=0;i<store.size();i++){
    cout<<store[i];
}
// int max=store[1]-store[0];
// for(int i=0;i<store.size();i++){
//       int diff=store[i+1]-store[i];
//       if(diff>max){
//         max=diff;
//       }

// }
// cout<<max;


}
