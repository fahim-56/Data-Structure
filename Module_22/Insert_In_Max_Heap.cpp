#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter The Number Of Element:" << endl;
    // 5
    int n;
    cin >> n;
    cout << "Enter Inserting " << n << " Element :" << endl;
    // 1 2 3 4 5
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        int parant_idx;
        while (cur_idx != 0)
        {
            parant_idx = (cur_idx - 1) / 2;
            if (v[parant_idx] < v[cur_idx])
                swap(v[parant_idx], v[cur_idx]);
            else
                break;
            cur_idx = parant_idx;
        }
    }
    // 5 4 2 1 3
    for (int x : v)
        cout << x << " ";
    return 0;
}