#include <bits/stdc++.h>
using namespace std;
vector<int> convertToBinary(int n)
{
    vector<int> result;
    while (n)
    {
        result.push_back(n % 2);
        n /= 2;
    }
    reverse(result.begin(),result.end());
    return result;
}
int minChanges(int n, int k)
{
    if (n == k)
        return 0;
    else if (n < k)
        return -1;
    else
    {
        vector<int> nbin = convertToBinary(n);
        vector<int> kbin = convertToBinary(k);
        int ct = 0;
        for (int i =nbin.size()-1, j=kbin.size()-1 ; i >=0 ; i-- )
        {
            if(j>=0){
                int diff=nbin[i]-kbin[j];
                if(diff<0) return -1;
                else {
                    ct+=diff;
                }
                j--;
            }
            else{
                ct+=nbin[i];
            }
        }
        return ct;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << minChanges(n, k);
}