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
    ll n, k;
    cin >> n >> k;
    vi prime;
    for (int i = 2; i <= n; i++)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            prime.pb(i);
    }
    ll cnt = 0;
    for (int i = 2; i < prime.size(); i++)
    {
        ll x = prime[i];
        x--;
        for(int j = 1; j < i-1; j++){ 
            if((prime[j-1] + prime[j]) == x){
                cnt++;   
            }
        }
    }
    if (cnt >= k)
    {
        YES;
    }
    else
        NO;
    // for(int i = 0; i < prime.size(); i++){
    //     cout << prime[i] << " ";
    // }
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}