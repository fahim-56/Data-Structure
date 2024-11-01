#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> cp;
    while (!st.empty())
    {
        cp.push(st.top());
        st.pop();
    }
    while (!cp.empty())
    {
        cout << cp.top() << " ";
        cp.pop();
    }

    return 0;
}