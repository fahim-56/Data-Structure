#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt_step = 0;
    // for (int i = 1; i <= n; i++) // O(N)
    // {
    //     for (int j = 1; j <= n; j++) // O(N)
    //     {
    //         cnt_step++;
    //     }
    // }
    for (int i = 1; i <= n - 1; i++) // O(N)
    {
        for (int j = i+1; j <= n; j++) // O(N)
        {
            cnt_step++;
        }
    }
    cout << cnt_step << endl; // O(N^2)

    return 0;
}