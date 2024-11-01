#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        queue<char> Q, QQ;
        for (char ch : S)
        {
            if (ch == '1')
                Q.push(ch);
            else
                QQ.push(ch);
        }
        if (Q.size() != QQ.size())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}