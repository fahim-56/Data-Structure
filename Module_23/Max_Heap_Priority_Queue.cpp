#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q;
    while (1)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int x;
            cout << "Push:" << endl;
            cin >> x;
            q.push(x);
        }
        else if (n == 2)
        {
            q.pop();
            cout << "First one poped" << endl;
        }
        else if (n == 3)
        {
            cout << "Top element " << q.top() << endl;
        }
        else
            break;
    }

    return 0;
}