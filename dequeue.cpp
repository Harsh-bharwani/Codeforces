/*
             Timestamp  : 00:06 - Sunday  22,Sep 2024   
*/
#include <bits/stdc++.h>
using namespace std;


void solve(long long _case)
{
    long long n, s, sum = 0;
    cin >> n >> s;
    long long a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if( sum<s ) cout<<-1<<'\n';
    else if(sum==s) cout<<0<<'\n';
    else {
        int p1=0, p2=n-1, ct=0;
        while(sum!=s){
            if(a[p1]==1) sum--, ct++,p1++;
            else if(a[p2]==1) sum--, ct++, p2--;
            else{
                int c1=0, c2=0, temp_p1=p1,temp_p2=p2;
                while(a[temp_p1]!=1){
                    c1++, temp_p1++;
                }
                while(a[temp_p2]!=1){
                    c2++, temp_p2--;
                }
                if(c1<=c2){
                    ct+=c1,p1=temp_p1;
                }
                else {
                    ct+=c2,p2=temp_p2;
                }
            }
        }
        cout<<ct<<'\n';
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