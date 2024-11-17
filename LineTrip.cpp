#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x; cin >> n >> x; 
    int ans = 0, prev = 0; 
    for(int i = 0; i<n; i++)
    {
        int a; cin >> a; 
        ans = max(ans, a-prev);
        prev = a; 
    }
    ans = max(ans, (x-prev)*2);
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