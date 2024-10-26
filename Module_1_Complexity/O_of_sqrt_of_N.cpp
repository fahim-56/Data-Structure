#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt_step = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            (i == (n / i)) ? cout << i << endl : cout << i << " " << n / i << endl;
        }
        cnt_step++;
    }
    // cout << cnt_step << endl;
    // for (int i = 1; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         (i == (n / i)) ? cout << i << endl : cout << i << " " << n / i << endl;
    //     }
    //     cnt_step++;
    // }
    // cout << cnt_step << endl;
    return 0;
}