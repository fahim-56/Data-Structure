#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout << "From fun(*&p)-> p " << p << endl;
}
void fun1(int *p)
{
    cout << "From fun1(*p)-> &p " << &p << endl;
}
void fun2(int *&p)
{
    cout << "From fun2(*&p)-> &p " << &p << endl;
}
int main()
{
    int n = 100;
    cout << " &n->" << &n << endl;

    int *ptr = &n;
    cout << "ptr ->" << ptr << endl;

    fun(ptr);
    cout << "ptr ->" << ptr << endl;

    fun1(ptr);
    cout << "ptr ->" << ptr << endl;

    fun2(ptr);
    cout << "ptr ->" << &ptr << endl;

    return 0;
}