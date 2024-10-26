#include <bits/stdc++.h>
using namespace std;
int main()
{
    // //direct initialization

    //  vector<int>v={10,40,30,20,50};

    // //user input

    //  int n;
    //  cin >> n;
    //  vector<int> v(n);
    //  vector<int> v(5);
    //  cout << v.size() << endl;
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      cin >> v[i];
    //  }

    // //initiatization all by one number

    //  int n;
    //  cin >> n;
    //  vector<int> v(n, 56);

    // // Vector copy from another vector
    // int n;
    // cin >> n;
    // vector<int> V(n, 56);
    // vector<int> v(V);

    // Vector copy from an array
    
    int arr[5] = {10, 20, 30, 40, 50};
    vector <int> v(arr,arr+5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}