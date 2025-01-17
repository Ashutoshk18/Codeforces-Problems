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
    bool flag = false; 
    int cnt = 0; 
    for(int i = 1; i < n; i++){
        int mini = min(arr[i-1], arr[i]); 
        int maxi = max(arr[i-1], arr[i]); 
        if(2*mini > maxi){
            flag = true; 
        }
    }
    if(flag) YES; 
    else NO; 

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