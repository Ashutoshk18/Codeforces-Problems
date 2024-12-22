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
    ll a, b;
    cin >> a >> b;
    ll sub = a-b; 
    ll sum = a+b;
    if(a-b == 1){
        bool flag = true; 
        for(ll i = 2; i <= sqrt(a+b); i++){
            if((a+b) % i == 0){
                flag = false; 
            }
        }
        flag ? YES : NO; 
    }
    else NO; 
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