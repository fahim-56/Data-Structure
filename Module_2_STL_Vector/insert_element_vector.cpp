#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 30, 60};
    vector<int> V = {40, 50};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 20);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.insert(v.begin() + 3, V.begin(), V.end());
    v.insert(v.end(), 70);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}