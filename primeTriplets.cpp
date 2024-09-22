#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    n-=4;
    for(int i=2;i<sqrt(n);i++){
        if(prime(i)){
            int sq=sqrt(n-i*i);
            if(sq*sq==n-i*i and (prime(i))){
                cout<<"Yes"<<'\n';
            }
            else{
                cout<<"No"<<'\n';
            }
        }
    }   
}