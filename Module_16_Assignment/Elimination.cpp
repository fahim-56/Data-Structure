#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char ch : s)
        {

            if (ch == '0')
            {
                st.push(ch);
            }
            else if (ch == '1')
            {
                if (!st.empty())
                {
                    if (st.top() == '0')
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push(ch);
                }
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}