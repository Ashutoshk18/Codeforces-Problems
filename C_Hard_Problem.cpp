#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll m, a, b, c; 
    cin >> m >> a >> b >> c; 
    ll ans = 0; 
    ll m1 = m, m2 = m; 
    if(a <= m){
        ans += a; 
        m1 -= a; 
    }
    else{
        ans += m; 
        m1 = 0; 
    }

    if(b <= m){
        ans += b; 
        m2 -= b; 
    }
    else{
        ans += m; 
        m2 = 0; 
    }

    m1 = m1 + m2; 
    if(m1>0){
        ans+=min(m1, c); 
    }
    cout << ans << endl; 
}

int main() {
	// your code goes here
	int t;
	cin >> t; 
	while(t--){
	    solve(); 
	}
    return 0; 
}
