/*
    Timestamp  : 21:02 - Saturday  21,Sep 2024   
*/
#include <bits/stdc++.h>
using namespace std;


void solve(long long _case)
{
    long long n,  cnt_happy = 0;
    double avg_half, sum=0.0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum+=a[i];
    }
    avg_half=sum/(2*n);
    for (int i = 0; i < n; i++) {
        if(avg_half<a[i]) cnt_happy++;
    }
    if(cnt_happy<(n/2.0)) cout<<0<<'\n';
    else{
        long long ans,convert;
        convert=n/2-(n%2==0); 
        ans=(static_cast<int>(avg_half) + cnt_happy-convert)*2*n-sum+1;
        if(ans==0 || n==1 || n==2) cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t = 1;
    cin >> t; // comment this line if your problem has 1 test case

    for(long long _case = 1; _case <= t; ++_case)solve(_case);
    return 0;
}