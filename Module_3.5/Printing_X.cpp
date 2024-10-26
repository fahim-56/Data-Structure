#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n;
    for (int i = 0; i < (n / 2); i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        x -= 2;
        for (int j = 0; j < x; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }
    for (int i = 0; i < (n / 2); i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    int k = (n / 2) - 1;
    x = 1;
    for (int i = n; i > (n / 2) + 1; i--)
    {
        for (int j = k; j > 0; j--)
        {
            cout << " ";
        }
        k--;
        cout << "/";
        for (int j = 0; j < x; j++)
        {
            cout << " ";
        }
        x += 2;
        cout << "\\" << endl;
    }
    return 0;
}