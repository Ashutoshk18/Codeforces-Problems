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

    int max = v[0];
    // int smax = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (max < v[i])
        {
            // smax = max;
            max = v[i];
        }
    }
    cout << max + v[v.size() - 1] << endl;
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