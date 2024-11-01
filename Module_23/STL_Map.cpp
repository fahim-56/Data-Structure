#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string> mp;
    // mp.insert({"Fahim", "Chowdhury"});
    // mp.insert({"Tonmoy", "Sheikh"});
    // mp.insert({"Kawshik", "Hossain"});
    mp["Fahim"] = "Chowdhury";
    mp["Tonmoy"] = "Sheikh";
    mp["Kawshik"] = "Hossain";
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // cout << mp["Nai emon kisu"] << endl;
    // cout << mp["Tonmoy"] << endl;

    return 0;
}