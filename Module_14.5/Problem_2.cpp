#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES" << endl;
    return 0;
}