#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    // if (!st.empty())
    //     cout << st.top() << endl;
    // st.push(10);
    // if (!st.empty())
    //     cout << st.top() << endl;
    // if (!st.empty())
    //     st.pop();
    // if (!st.empty())
    //     cout << st.top() << endl;
    // if (!st.empty())
    //     st.pop();
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}