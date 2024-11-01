#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    cout << endl
         << "Back : " << Q.back() << endl;
    cout << endl
         << "Emplace : " << Q.emplace() << endl;

    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl
         << "Size : " << Q.size();

    return 0;
}