#include<iostream>
using namespace std; 
#define ll long long

void solve(){
    ll n; cin >> n; 
    ll arr[100001]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        if(arr[i] == 0){
            cout << 0 << endl; 
            return; 
        }
    }
    ll ub = (ll)1e18, prod = 1; 
    for(int i = 0; i < n; i++){
        if(prod > ub/arr[i]){
            cout << -1 << endl; 
            return; 
        }
        else prod*=arr[i]; 
    }
    cout << prod << endl; 
}

int main(){
    int t = 1;
    while(t--){
        solve(); 
    }
    return 0; 
}