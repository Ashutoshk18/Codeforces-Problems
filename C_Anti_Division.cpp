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

ll gcd(ll a, ll b){
    if(b == 0){
        return a; 
    }
    return gcd(b, a%b); 
}

ll lcm(ll a, ll b){
    return (1LL * a/gcd(a, b)) * b;  
}
ll a, b; 
ll f(ll x){
    return (b / x) - ((a-1)/x); 
}
void solve()
{
    ll c, d; 
    cin >> a >> b >> c >> d; 
    ll lc = lcm(c,d); 
    cout << (b-a+1) - (f(c) + f(d) - f(lcm(c, d))); 
    
    //Don't know why the below solution is not working?
    // ll a, b, c, d; 
    // cin >> a >> b >> c >> d; 
    // //Take the LCM of C and D. 
    // ll first_term1 = a%c != 0?a + c - a%c : a; 
    // ll first_term2 = a%d == 0?a : a + d - a%d; 
    // ll cnt_a = 0, cnt_b = 0; 
    // cnt_a = (b - first_term1) / c + 1; 
    // cnt_b = (b - first_term2) / d + 1; 
    // ll lc = lcm(c, d); 
    // ll firstlc = a%lc != 0?a + lc - a%lc : a; 
    // ll common = (b - firstlc) / lc + 1; 

    // cout << (b - a + 1) - (cnt_a + cnt_b - common)<< endl; 
}

int main()
{
    int t = 1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}