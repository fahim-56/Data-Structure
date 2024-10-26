#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<long long int> pre(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i] + pre[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << pre[r] << endl;
        }
        else
        {
            cout << (pre[r] - pre[l-1]) << endl;
        }
    }

    return 0;
}