#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 100, 50};
    
    replace(v.begin(), v.end(), 100, 40);
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}