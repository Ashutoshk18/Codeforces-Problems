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
    vector<int> arr(n); 
    for(auto &i : arr){
        cin >> i; 
    }
    if(n == 1){
        if(arr[0] > 1) NO; 
        else YES; 
        return;
    }
    sort(arr.begin(), arr.end()); 
    arr[n-1] - arr[n-2] > 1 ? NO : YES; 
    
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