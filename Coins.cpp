#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
        cout << "YES" << endl;
    else if (n % k == 0)
        cout << "YES" << endl;
    else
    {
        if (n % 2 != 0 && k % 2 != 0)
            cout << "YES" << endl;
        else
        {
            ll a = n / k;
            ll b = n % k;
            if (b % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
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