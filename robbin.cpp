/*
             Timestamp  : 20:18 - Saturday  21,Sep 2024   
*/
#include <bits/stdc++.h>
using namespace std;


void solve(long long _case)
{
    long long n, k, sum = 0, ct=0;
    cin >> n>>k;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        if(x>=k) sum+=x;
        else if(x==0 and sum>0) sum--,ct++;
    }
    cout<<ct<<'\n';
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