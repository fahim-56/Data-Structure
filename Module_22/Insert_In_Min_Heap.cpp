#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter the number of Element:" << endl;
    int n;
    cin >> n;
    // 5
    cout << "Enter the Elements:" << endl;
    // 5 4 3 2 1
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int parant_idx = (cur_idx - 1) / 2;
            if (v[parant_idx] > v[cur_idx])
            {
                swap(v[parant_idx], v[cur_idx]);
                cur_idx = parant_idx;
            }
            else
                break;
        }
    }
    // 1 2 4 5 3
    for (int x : v)
        cout << x << " ";
    return 0;
}