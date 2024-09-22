#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int a[n];
        cin>>a[n];
        int count[n];
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=0;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(a[j]==a[k]);
                    ct++;
                }
            } 
            count[i]=ct;
        }
        cout<<count;

    }
}