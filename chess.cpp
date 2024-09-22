#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    if( (p1+p2+p3)%2!=0){
        cout<<-1<<endl;
    }
    else {if(p1+p2<=p3){
        cout<<p1+p2<<endl;
    }
    else{
        cout<<min(p1,p3)+min(p2,p3)-1<<endl;
    }
    }
}
}
