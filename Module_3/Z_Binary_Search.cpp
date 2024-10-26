#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    //  for (int i = 0; i < n; i++)
    // {
    //     cout<< v[i]<<" ";
    // }
    int x, mid;
    while (q--)
    {
        cin >> x;
        int l = 0, r = (n - 1);
        int flag = 0;
        while (l <= r)
        {
            mid = ((l + r) / 2);
            if (v[mid] == x)
            {
                flag++;
                break;
            }
            else if (v[mid] > x)
                r = mid - 1;
            else if (v[mid] < x)
                l = mid + 1;
        }
        if (flag == 0)
            cout << "not found" << endl;
        else
            cout << "found" << endl;
    }

    return 0;
}