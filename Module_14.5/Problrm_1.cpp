#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> st_1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st_1.push(x);
    }
    int m;
    cin >> m;
    stack<int> st_2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st_2.push(x);
    }
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!st_1.empty())
    {
        if (st_1.top() != st_2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st_1.pop();
        st_2.pop();
    }
    cout << "YES" << endl;
    return 0;
}