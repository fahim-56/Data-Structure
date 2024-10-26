#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 100, 40, 50, 40};
    // v.erase(v.begin()+3);
    v.erase(v.begin() + 3, v.end() - 1);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}