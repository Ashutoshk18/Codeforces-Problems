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
    ll l, r, k; 
    cin >> l >> r >> k; 
    if(l == r){
        if(l == 1) NO; 
        else YES; 
        return; 
    }
    ll odd;
    if(l % 2 == 0){
        odd = (r - l + 1) - (r - l + 2) / 2; 
    }
    else{
        odd = (r - l + 2) / 2; 
    }
    odd <= k ? YES : NO; 
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