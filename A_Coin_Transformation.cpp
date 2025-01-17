#include<bits/stdc++.h>
using namespace std;

//define
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
#define f first
#define s second

//typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

void solve()
{
    ll n; cin >> n;
    if(n < 4){
        cout << 1 << endl; 
    }
    else{
        ll ans = 0; 
        while(n>3){
            ans++; 
            n/=4; 
        }
        cout << (1 << ans) << endl; 
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}