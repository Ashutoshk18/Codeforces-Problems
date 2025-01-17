#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n; 
    map<int, int> mpp; 
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        mpp[x]++; 
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        mpp[x]++; 
    }
    int maxi = 0; 
    for(auto i : mpp){
        maxi = max(i.second, maxi); 
    }
    cout << maxi << endl; 
}

int main() {
	int t; cin >> t; 
	while(t--){
	    solve(); 
	}
    return 0; 
}
