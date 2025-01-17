#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, k, q; cin >> n >> k >> q;
    int cnt = 0; ll ans = 0; 
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        if(x > q){
            cnt = 0; 
        }
        else{
            cnt++;
            if(cnt >= k){
                ans += (cnt + 1 - k); 
            }
        }
    }
    cout << ans << endl;
}

int main() {
	int t; cin >> t; 
	while(t--){
	   solve(); 
	}
    return 0; 
}
