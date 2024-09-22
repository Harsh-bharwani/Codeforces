#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, c;
    cin >> n >> q >> c;
    int x[n];
    int y[n];
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> s[i];
    }
    int t[q];
    int x1[q];
    int y1[q];
    int x2[q];
    int y2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> t[i] >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    for (int i = 0; i < q; i++){
        int bright = 0;
        for (int j = 0; j < n; j++)
        {
            if (x1[i] <= x[j] && x[j] <= x2[i] && y1[i] <= y[j] && y[j] <= y2[i])
            {
                for (int k = 1; k <= t[i]; k++)
                {  
                    if(s[i]<=c) {
                        s[j] += 1;
                    }
                    else {
                        s[j] = 0;
                    }
                }
                bright+=s[j];
            }
        }
        cout<<bright<<'\n';
    }
}

