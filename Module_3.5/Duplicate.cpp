#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = 0;
    for (int i = 0; i < n ; i++)
    {
        auto it = find((v.begin() + (i + 1)), v.end(), v[i]);
        if (it != v.end())
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}