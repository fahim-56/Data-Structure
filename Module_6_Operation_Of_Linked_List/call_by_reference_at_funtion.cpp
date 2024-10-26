#include <bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    *p = 200;
}
int main()
{
    int n = 100;
    fun(&n);
    cout << n << endl;
    return 0;
}