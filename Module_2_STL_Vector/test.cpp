#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter vector Number :";
    cin >> n;
    cout << "Enter vector elements :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}