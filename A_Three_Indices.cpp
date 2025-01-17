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
    for(int i = 0; i<n; i++){
        cin >> arr[i]; 
    }
    for(int i=1; i < n-1; i++){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            YES; 
            cout << i << " " << i+1 << " " << i+2 << endl; 
            return; 
        }
    }
    NO;  
    return; 

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