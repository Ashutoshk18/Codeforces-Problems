#include<bits/stdc++.h>
using namespace std;

//define
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
#define popb pop_back
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
    ll n; cin >> n; 
    vi arr(n); int cnt_odd = 0, cnt_even = 0; 
    int min_odd = 1e6 + 1, min_even = 1e6 + 1;
    vi odd, even; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        if(arr[i]%2==0){
            cnt_even++;  
            min_even = min(min_even, arr[i]); 
            even.pb(arr[i]); 
        }
        else{
            cnt_odd++; 
            min_odd = min(min_odd, arr[i]); 
            odd.pb(arr[i]); 
        }
    }
    if(cnt_odd%2==0){
        cout << 0 << endl; 
    }
    else{
        if(cnt_even == 0){
            int mini = 24; 
            for(int i = 0; i < odd.size(); i++){
                int x = odd[i]; 
                int steps = 0; 
                while(x % 2 == 1){
                    steps++;
                    x/=2;  
                }
                mini = min(mini, steps); 
            }
            cout << mini << endl; 
        } 
        else{
            int mini1 = 24; 
            for(int i = 0; i < even.size(); i++){
                int x = even[i]; 
                int steps = 0; 
                while(x % 2 == 0){
                    steps++;
                    x/=2;  
                }
                mini1 = min(mini1, steps); 
            }
            int mini2 = 24; 
            for(int i = 0; i < odd.size(); i++){
                int x = odd[i]; 
                int steps = 0; 
                while(x % 2 == 1){
                    steps++;
                    x/=2;  
                }
                mini2 = min(mini2, steps); 
            }
            cout << min(mini1, mini2) << endl; 
        }
    }

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