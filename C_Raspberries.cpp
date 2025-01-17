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
    int n, k; 
    cin >> n >> k; 
    int ans = INT_MAX; 
    vi arr(n); int cnt = 0; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]%2==0) cnt++; 
    }
    for(int i = 0; i < n; i++){
        int rem = arr[i] % k; 
        rem == 0 ? ans = 0 : rem = k - rem; 
        if(k == 4){
            cnt >= 2 ? ans = 0 : ans = min(ans, 2 - cnt);
        }
        ans = min(rem, ans); 
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