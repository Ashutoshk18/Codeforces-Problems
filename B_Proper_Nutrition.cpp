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
    ll n, a, b; 
    cin >> n >> a >> b; 
    if(n%a == 0){
        YES; 
        cout << n/a << " " << 0 << endl; 
        return; 
    }
    if(n%b == 0){
        YES; 
        cout << 0 << " " << n/b << endl;
        return; 
    }
    bool flag = false; 
    ll size = n/a + 1; 
    ll x = 0, y = 0; 
    for(int i = 1; i < size; i++){
        if((n - (i*a))%b == 0){
            flag = true; 
            y = (n - (i*a))/b; 
            x = i; 
            break; 
        }
    }
    if(flag){
        YES; 
        cout << x << " " << y << endl;
    } 
    else NO; 
    
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