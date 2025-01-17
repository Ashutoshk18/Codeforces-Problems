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
    ll n; 
    cin >> n;
    if(n & 1){
        //this is odd
         
        if(((n-1) / 2) & 1){
            //Odd
            cout << (n-1) / 2 -2 << " " << (n-1) / 2+2 << " " << 1 << endl; 
        }
        else{
            cout << (n-1) / 2-1 << " " << (n-1) / 2 + 1 << " " << 1 << endl; 
        }
    }
    else{ 
        cout << (n-1) / 2 << " " << (n-1) / 2 +1 << " " << 1 << endl; 
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