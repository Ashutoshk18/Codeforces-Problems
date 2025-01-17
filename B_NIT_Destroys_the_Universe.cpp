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
    int n; cin >> n; 
    vi arr(n); 
    for(auto &i : arr){
        cin >> i; 
    }
    int zeroes = 0, l = 0, r = n-1; 
    while(arr[l] == 0 && l < n){
        l++; 
    }
    while(arr[r] ==  0 && r >= 0){
        r--; 
    } 
    if(l == n){
        cout << 0 << endl; 
        return; 
    }
    while(l<=r){
        if(arr[l] == 0) zeroes++; 
        l++; 
    }
    zeroes ? cout << 2 << endl : cout << 1 << endl; 
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