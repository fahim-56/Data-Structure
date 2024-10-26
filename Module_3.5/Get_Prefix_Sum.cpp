#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long long int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    p[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = v[i] + p[i - 1];
    }
    reverse(p.begin(), p.end());
    for (long long int x : p)
    {
        cout << x << " ";
    }
    return 0;
}