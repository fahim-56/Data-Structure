#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > 0)
            (v1[i] = 1);
        else if (v1[i] < 0)
            (v1[i] = 2);
    }
    for (int i = 0; i < n; i++)
        cout << v1[i] << " ";
    return 0;
}