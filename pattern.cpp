#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){ //i-->rows
            //j-->columns
            if(i==0){
                string spaces(n-1,' ');
                cout << spaces << i+1 << spaces << '\n';        
            }
            else if( i==n-1 ) {
                string no(2*n-1, n + '0'); // +'0' --> to convert no into charachter 
                cout << no <<'\n';
            }
            else{
                string spaces1(n-i-1, ' ');
                string spaces2(2*i-1, ' ');
                cout << spaces1 << i+1 << spaces2 << i+1 << spaces1 <<'\n'; 
        }
    }
}