#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    string her;
    cin >> her;
    vector<char> t;
    for (int i = s.length() - 1; i >= 0; --i)
    {
        t.push_back(s[i]);
    }
    // check
    int flag = 1;
    for (int i = 0; i < her.length(); i++)
    {
        if (her[i] != t[i])
        {
            flag = 0;
        }
    }
    if (flag == 1 && her.length() == t.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    solve();

    return 0;
}