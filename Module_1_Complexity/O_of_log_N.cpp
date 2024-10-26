#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin >> n;
    int cnt_step = 0;
    while (n > 0)    //log(n)
    {
        cout << (n % 10) << endl;
        n /= 10;
        // n/=k;
        cnt_step++;
    }

    // //  for (int i = 1; i < n; i *= k)
    // for (int i = 1; i < n; i *= 2) // log(n)
    // {
    //     // cout << i << endl;
    //     cnt_step++;
    // }
    cout <<"Step Number : "<< cnt_step << endl;
    return 0;
}