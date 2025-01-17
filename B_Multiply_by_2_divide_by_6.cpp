#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    ll t = 0, s = 0; 
    while(n%2==0){
       s++;
       n/=2;
    }
    while(n%3==0){
       t++;
       n/=3;
    }
    //at the end 1 should be remaining and that will assure that its only divisors are 2 and 3. 
    if(n==1 && s <= t){
        cout << 2*t - s << endl; 
    }
    else{
        cout << -1 << endl; 
    }
}

int main() {
	int t; cin >> t;
	while(t--){
	    solve();
	}
    return 0;
}