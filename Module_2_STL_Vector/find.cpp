#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 100, 50};
    auto it = find(v.begin(), v.end(), 100);
    cout << *it<<" ";
    if (it != v.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}