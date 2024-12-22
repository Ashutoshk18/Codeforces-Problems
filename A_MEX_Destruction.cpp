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
    int n; 
    cin >> n; 
    vi arr(n); 
    int sum = 0; 
    bool flag = false; 
    int left = 0, right = n-1;  
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        sum += arr[i]; 
    }
    if(sum == 0){
        cout << 0 << endl; 
        return; 
    }
    while(arr[left] == 0){
        left++; 
    }
    while(arr[right] == 0){
        right--; 
    }
    // cout << arr[left] << " " << arr[right] << endl; 
    for(int i = left; i <= right; i++){
        if(arr[i] == 0){
            flag = true;
        }
    }
    if(flag) cout << 2 << endl; 
    else cout << 1 << endl; 
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