#include <bits/stdc++.h>
using namespace std;
bool in_present( const char c, const vector<char>& v){
    if(find(v.begin(), v.end(), c)!=v.end()) return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ct = 0;
    long long ans = 0;
    vector<char> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {   char ch=s[i];
        if (in_present(ch, v))
        {
            ct++;
        }
        else
        {
            ans += 1ll * ct * (ct + 1) / 2;
            ct = 0;
        }
    }
    if (ct)
    {
        ans += 1ll * ct * (ct + 1) / 2;
    }
    cout << ans << '\n';
}