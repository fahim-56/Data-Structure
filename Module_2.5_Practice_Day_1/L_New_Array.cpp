#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    vector<int> v(2 * n);
    for (int i = 0; i < (2 * n); i++)
    {
        if (i < n)
            v[i] = v2[i];
        else
            v[i] = v1[i - n];
    }
    for (int i = 0; i < (2 * n); i++)
        cout << v[i] << " ";
    return 0;
}