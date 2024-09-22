#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 1;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[0] != s[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << s[0] << endl;
        }

            else
            {
                cout << "NO" << endl;
            }
            
    }
}