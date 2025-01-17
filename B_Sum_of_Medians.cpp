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
    int n, k; cin >> n >> k; 
    vi arr(n*k + 1); 
    for(int i = 1; i <= n*k ; i++){
        cin >> arr[i]; 
    }
    int med; 
    n%2==0 ? med = n/2 : med = n/2 + 1;
    int f = (med-1)*k + 1; 
    int gap = n - med + 1; 
    ll ans = 0; 
    for(int i = f ; i <= n*k; i = i + gap){
        ans += arr[i];
    }
    cout << ans << endl; 
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