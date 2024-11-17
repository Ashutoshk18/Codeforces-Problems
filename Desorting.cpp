#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool checksorting(ll arr[], ll n)
{
    for (ll i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}
void solve(ll arr[], ll n)
{
    if (checksorting(arr, n) == 0) //means it is desorted.
        cout << "0" << endl;
    else
    {
        ll count = 0;
        while (arr[n - 2] <= arr[n-1])
        {
            // choosing i.
            ll i = n - 2;
            for (ll k = 0; k <= i; k++)
            {
                arr[k] += 1;
            }
            for (ll k = i + 1; k < n; k++)
            {
                arr[k] -= 1;
            }
            count++;
        }
        cout << count << endl;
    }
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll arr[500];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}