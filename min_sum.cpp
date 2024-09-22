#include<bits/stdc++.h>
using namespace std;
int big(int a[],int size){
    int big=INT_MIN;
    int big_index=0;
    for(int i=0;i<size;i++){
        if(a[i]>big){
            big_index=i;
    }
    return big_index;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int big_index=big(a,n);
        cout<<big_index;
    //     while(k){
    //         if(big_index==0){
    //             if(a[big_index]>a[big_index+1]){
    //                 a[big_index]=a[big_index+1];
    //             }
    //         }
    //         else{
    //             if(big_index==n-1 &&  a[big_index]>a[big_index-1]){
    //                {
    //                    a[big_index]=a[big_index-1];
    //                 }
    //             }
    //             else{
    //                 if(a[big_index]>a[big_index+1] || a[big_index]>a[big_index-1] ){
    //                     a[big_index]=min(a[big_index+1],a[big_index-1]);
    //                 }
    //                 }

    //         }
    // }
    // int sum = 0;
    // for(int i=0;i<n;i++){
    //     sum+=a[i];
    // }
    // cout<<sum<<endl;

    // }
    }
}