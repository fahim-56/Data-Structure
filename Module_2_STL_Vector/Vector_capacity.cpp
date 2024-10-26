#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // cout << v.max_size();

    // cout<<v.capacity()<<endl;
    // v.push_back(60);
    // cout<<v.capacity()<<endl;

    // cout << v.empty() << endl;

    // v.clear(); // just clear size
    // v.push_back(100); // will be push on first and v.size()=1

    // cout << v.empty() << endl; // if(empty) return 1

    v.resize(2); // just reduce size
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) // still show for 5 v.size()=2
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    v.resize(5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    v.resize(7, 100);
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}