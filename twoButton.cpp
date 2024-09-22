#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n >= m)
    {
        std::cout << n - m << '\n';
    }
    else
    {
        int ct=0;
        if(n*2 == m){
            cout<<1<<'\n';
        }
        else{
            while(n<=m){
            m/=2;
            ct++;
        }
        ct+=n-m;
        cout<<ct<<'\n';
        }
    }
}
