#include <iostream>
using namespace std;
#define ll long long

void solve()
{
    ll m, n;
    cin >> m >> n;
    ll x = (n + 2) / 4;
    ll y = (n + 1) / 4;
    ll z = (n) / 4;
    ll a = (n-1) / 4;
    if(n == 0){
        cout << m << endl; 
        return ; 
    }
    if (m % 2 == 0)
    {
        // m is even
        ll first = (x * (4 + (x - 1) * 4)) / 2;
        ll second = (y * (6 + (y - 1) * 4)) / 2;
        ll third = (-1) * (z * (8 + (z - 1) * 4)) / 2;
        ll fourth = (-1) * (a * (10 + (a - 1) * 4)) / 2;
        cout << m + first + second + third + fourth - 1 << endl;
    }
    else
    {
        // m is odd
        ll first = (-1) * (x * (4 + (x - 1) * 4)) / 2;
        ll second = (-1) * (y * (6 + (y - 1) * 4)) / 2;
        ll third = (z * (8 + (z - 1) * 4)) / 2;
        ll fourth = (a * (10 + (a - 1) * 4)) / 2;
        cout << m + first + second + third + fourth + 1 << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
