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
    int n, p;
    cin >> n >> p;
    vi a(n), b(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<pll> combo; 
    for (int i = 0; i < n; i++)
    {
        combo.push_back({b[i], a[i]}); 
    }
    sort(combo.begin(), combo.end()); 
    ll ans = 0;
    n--;
    ans += p;
    for (auto i : combo){  
        if(n <= 0) break;
        if(i.first > p){
            n--; 
            ans += p;
        }
        else{
            int used = min(1LL*n, i.second); 
            ans += (1LL * used * i.first); 
            n -= used; 
        }
    }
    cout << ans << endl;
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