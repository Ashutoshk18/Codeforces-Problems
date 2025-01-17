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
    //Taking the inputs
    int n; cin >> n; 
    vector<pair<int, int>> arr(n); 
    map<int, int> mpp;
    for(int i = 1; i <= 2*n ; i++){
        mpp[i] = 0; 
    } 
    for(auto &i : arr){
        cin >> i.first >> i.second; 
        if(i.first == i.second){
            mpp[i.first]++; 
        }
    }
    vector<int> pre(2*n + 1); int sum = 0; 
    for(int i = 1; i < pre.size(); i++){
        sum += mpp[i] > 0 ? 1 : mpp[i]; 
        pre[i] = sum; 
    }
    
    for(int i = 0; i < n; i++){
        cout << ((arr[i].first == arr[i].second) ? mpp[arr[i].first] <= 1 ? "1" : "0" : pre[arr[i].second] - pre[arr[i].first - 1] < arr[i].second - arr[i].first + 1 ? "1" : "0"); 

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