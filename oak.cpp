/*
             Timestamp  : 20:30 - Saturday  21,Sep 2024   
*/
#include <bits/stdc++.h>
using namespace std;


void solve(long long _case)
{
    long long n, k, odd_ct = 0;
    cin >> n>>k;
    if(n%2!=0 and (n-k+1)%2!=0) odd_ct=(n-(n-k+1))/2;
    if(sum%2==0){
        cout << "YES"  << "\n";
    }else{
        cout << "NO"  << "\n";
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