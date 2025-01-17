#include <bits/stdc++.h>

using namespace std;
#define ll long long
void reducer(vector <ll> & arr) {
    ll maxi = 0; 
    for(int i = 0; i<arr.size(); i++){
        maxi = max(arr[i], maxi); 
    }
    if (maxi % 2 == 0) {
        ll dup = maxi; 
        ll test = maxi / 2;
        for (int i = 0; i < arr.size(); i++) {
            if(arr[i] == maxi){
                arr[i] = test; 
            }
        }
    }
}

void solve(){
    int n; 
    cin >> n; 
    set<ll> arr; 
    for(int i = 0; i < n; i++){
        ll x; cin >> x; 
        arr.insert(x);
    }
    int result = 0; 
    while(!arr.empty()){
        int ele = *arr.rbegin();
        arr.erase(ele); 
        if(ele%2==0){
            result++;
            arr.insert(ele/2);
        }
    }
    cout << result << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}