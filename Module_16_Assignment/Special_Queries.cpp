#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int x;
    queue<string> line;
    string s;
    while (q--)
    {
        cin >> x;
        if (x == 0)
        {
            cin >> s;
            line.push(s);
            continue;
        }
        else if (x == 1)
        {
            if (line.empty())
                cout << "Invalid" << endl;
            else if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }
    return 0;
}