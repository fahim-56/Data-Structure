#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(v1.begin(), v1.end(), v1[i] + 1);
        if (it != v1.end())
        {
            cnt++;
        }
    }
    (cnt != 0) ? cout << cnt << endl : cout << "0" << endl;
    return 0;
}