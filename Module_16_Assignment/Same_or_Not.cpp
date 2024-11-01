#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> S;
    queue<int> Q;
    int n1, n2;
    cin >> n1 >> n2;
    int x;
    while (n1--)
    {
        cin >> x;
        S.push(x);
    }
    while (n2--)
    {
        cin >> x;
        Q.push(x);
    }
    if (S.size() != Q.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!S.empty())
    {
        if (S.top() != Q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        S.pop();
        Q.pop();
    }
    cout << "YES" << endl;
    return 0;
}