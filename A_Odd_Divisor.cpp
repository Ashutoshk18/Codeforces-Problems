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
    if(n%2==1){
        YES; return; 
    }
    bool flag = true;  
    for(int i = 1; i < 47; i++){
        if(pow(2, i) == n){
            flag = false; 
        }
    }
    flag ? YES : NO; 
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