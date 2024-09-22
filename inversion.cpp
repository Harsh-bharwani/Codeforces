#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	while(t--){
        int n;
        cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
        }
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
                  for(int p=0;p<n;p++){
					for(int q=0;q<n;q++){
						if(a[i][j]>a[p][q] && i<=p && j<=q){
							count++;
						}
					}
				  }
		}
	}
    cout<<count<<endl;
	}
	}