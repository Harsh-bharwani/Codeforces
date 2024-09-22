#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long a[n];
long long b[n+1];
for(long long i=0;i<n;i++){
cin>>a[i];
}
for(long long i=0;i<n+1;i++){
cin>>b[i];
}
long long count=0;
long long flag=true;
for(long long i=0;i<n;i++){
    count+=abs(a[i]-b[i]);
}

for(long long i=0;i<n;i++){
    if ((b[n]<=a[i] && b[n]>=b[i]) || (b[n]<=b[i] && b[n]>=a[i])) {
        flag=false;
    }
}

long long minn=a[0]-b[n];
long long id=0;
for(long long i=0;i<n;i++){
    if (abs(a[i]-b[0])<minn){
        minn=abs(a[i]-b[0]);
        id=i;
    }
}
if (flag) {
    cout<<count + 1 + min(abs(b[n]-a[id]),abs(b[n]-b[id])) <<"\n";
}
else{
    cout<< count +1 <<"\n";
}


}
}