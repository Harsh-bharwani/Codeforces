/*
             Timestamp  : 11:54 - Saturday  21,Sep 2024   
*/
#include <bits/stdc++.h>
using namespace std;


void solve(long long _case)
{
    long long n, m, k, b, mn = INT_MAX, mx = -1, cnt = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    long long sum=a[n-2];
    for (int i = n-3; i >=0 ; i--) {
        sum-=a[i];
    }
    cout<< (a[n-1]-sum) <<'\n';
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t = 1;
    cin >> t; 

    for(long long _case = 1; _case <= t; ++_case)solve(_case);
    return 0;
}