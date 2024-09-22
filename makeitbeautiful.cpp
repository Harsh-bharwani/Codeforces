#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
         if(a[0]=0){
            count++;
            break;
        }
        if(a[i]==sum){
            count++;
            break;
        }
        sum+=a[i];
    }
    
    if(count>0){ // for ugly
        int sum=0;
        for(int i=0;i<n-1;i++){
          if(a[i]==sum || a[i+1]==sum){
             int temp=a[i];
             a[i]=a[i+1];
             a[i+1]=temp;
             if(a[i]==a[i+1]){
            cout<<"NO"<<endl;
             }
             else{
            cout<<"YES"<<endl;
            for(int j=0;j<n;j++){
                cout<<a[j];
            }
            cout<<endl;
          }
          }
         sum+=a[i];
    }
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n ;i++){
            cout<<a[i];
        }
        cout<<endl;
    }
    
}
}
