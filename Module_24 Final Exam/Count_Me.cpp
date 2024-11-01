#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        map<string, int> mp;
        string ans;
        int mx = 0;
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                ans = word;
                mx = mp[word];
            }
        }
        cout << ans << " " << mx << endl;
    }
    return 0;
}