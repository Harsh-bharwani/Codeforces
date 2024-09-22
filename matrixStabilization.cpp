#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int maximum = INT_MIN;
                if (v[i][j] > v[i - 1][j] and i > 0 and v[i][j] > v[i + 1][j] and i + 1 < n and v[i][j] > v[i][j - 1] and j > 0 and v[i][j] > v[i][j + 1] and j + 1 < m)
                {
                    if (i + 1 < n)
                    {
                        maximum = max(maximum, v[i + 1][j]);
                    }
                    if (i > 0)
                    {
                        maximum = max(maximum, v[i - 1][j]);
                    }
                    if (j > 0)
                    {
                        maximum = max(maximum, v[i][j - 1]);
                    }
                    if (j + 1 < m)
                    {
                        maximum = max(maximum, v[i][j + 1]);
                    }
                    v[i][j] = maximum;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}