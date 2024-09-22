#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
        int b[n];
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
        for(int i=0;i<n;i++){
			b[i]=a[i];
		}
        for(int i=0;i<n;i++){
            if(i>=k){
                a[i]=b[i-k];
            }
            else{
                a[i]=b[n-k+i];
            }
        }
         for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
        cout<<endl;
        
	}    
}