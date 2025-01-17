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
    vi arr(n); 
    vector<pi> ans;  
    for(auto &i : arr){
        cin >> i;
        i %= k;  
        if(i == 0){
            i = k; 
        }
    }
    for(int i = 0; i < n; i++){
        ans.push_back({-arr[i], i}); 
    }
    sort(ans.begin(), ans.end());
    for(auto i : ans){
        cout << i.second + 1 << " ";
    }
    cout << endl; 
    
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