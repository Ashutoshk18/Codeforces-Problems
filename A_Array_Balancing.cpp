#include <bits/stdc++.h>
using namespace std;

// define
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
#define f first
#define s second

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    vll a(n), b(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i-1] - a[i]) + abs(b[i-1] - b[i]) > abs(a[i-1] - b[i]) + abs(b[i-1] - a[i]))
        {
            swap(a[i], b[i]);
        }
    }
    for(int i = 1; i < n; i++){
        sum += abs(a[i-1] - a[i]) + abs(b[i-1] - b[i]); 
    }
    cout << sum << endl;
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