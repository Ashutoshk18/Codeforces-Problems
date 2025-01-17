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
    vll arr(n); 
    ll sum = 0; ll zeroes = 0, ones = 0; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        if(arr[i] == 0) zeroes++; 
        if(arr[i] == 1) ones++; 
        sum += arr[i]; 
    }
    cout << ones * (1LL << zeroes) << endl;

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