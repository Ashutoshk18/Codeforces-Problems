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
    ll a, b; cin >> a >> b; 
    ll gcd = abs(a - b); 
    if(gcd == 0){
        cout << 0 << " " << 0 << endl; 
        return; 
    }
    ll moves1 = a % gcd; 
    ll moves2 = gcd - moves1; 
    cout << gcd << " " << min(min(a, b), min(moves1, moves2)) << endl; 

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