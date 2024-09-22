#include <bits/stdc++.h>
using namespace std;
int solve(int x)
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>c[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int flag=true;
        int al_sum=0;
        int al_l=0;
        int al_r=0;
        while(al_sum<sum/3 and al_r<n){
            al_sum+=a[al_r];
            al_r++;
        }
        // cout<<sum;
        if(al_sum<(sum/3)){
            flag=false;
        }
        int b_sum=0;
        int b_l=al_r;
        int b_r=al_r;
        while(b_sum<=sum/3 and b_r<n){
            b_sum+=b[b_r];
            b_r++;
        }
        if(b_sum<(sum/3)){
            flag=false;
        }
        // cout<<b_sum;
        int c_sum=0;
        int c_l=b_r;
        int c_r=b_r;
        while(c_sum<=sum/3 and c_r<n){
            c_sum+=c[c_r];
            c_r++;
        }
        if(c_sum<(sum/3)){
            flag=false;
        }
        // cout<<b_sum;
        if(flag==true){
            cout<<al_l+1<<' '<<al_r+1<<' '<<b_l+1<<' '<<b_r+1<<' '<<c_l+1<<' '<<c_r+1<<'\n';
        }
        else{
            cout<<-1<<'\n';
        }
    }
}
