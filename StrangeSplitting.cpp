#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (v[0] == v[n-1])
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        vector<string> a;
        for (int i = 0; i < n; i++)
        {
            if (i == n / 2)
                a.push_back("B");
            else
                a.push_back("R");
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
