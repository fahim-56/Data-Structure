#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            int v;
            cin >> v;
            q.push(v);
            if (q.empty())
                cout << "Empty" << endl;
            else
                cout << q.top() << endl;
        }
        else if (k == 1)
        {
            if (q.empty())
                cout << "Empty" << endl;
            else
                cout << q.top() << endl;
        }
        else if (k == 2)
        {
            if (!q.empty())
                q.pop();
            if (q.empty())
                cout << "Empty" << endl;
            else
                cout << q.top() << endl;
        }
        else
            cout << "Empty" << endl;
    }

    return 0;
}