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
    int n, x; cin >> n >> x; 
    vi arr(n); ll sum = 0; 
    ll maxi = 0; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        sum += arr[i]; 
        arr[i] % x == 0 ? maxi += arr[i]/x : maxi += (arr[i]/x + 1); 
    }
    sum%x==0 ? sum = sum/x : sum = sum/x + 1; 
    cout << sum << " " << maxi << endl; 

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