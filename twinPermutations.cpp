#include<iostream>
using namespace std;
 int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int j=0;j<n;j++){
            cin >>a[j];
        }
        for(int j=0;j<n;j++){
            b[j]=1;
        }
        for(int j=1;j<=n;j++){
            if(a[j-1] + 1 > a[j] + 1)
            b[j]=a[j-1] + 1 - a[j];
            a[j]++;
        }
        for(int j=0;j<n;j++){
            cout<<b[j];
        }
        cout<<endl;
}
}