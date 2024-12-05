#include<iostream>
#include<vector>
#define ll long long
using namespace std; 

void solve(){
    int n; 
    cin >> n; 
    vector<ll> arr(n); 
    int x = -1; 
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    ll ans = 0; 
    for(int i = 0; i < n-1; i++){
        if(arr[i] != 0){
            x = i; 
            break; 
        }
    }
    if(x == -1){
        cout << 0 << endl; 
        return ;
    }
    for(int i = x; i < n-1; i++){
        ans += arr[i];
        if(arr[i] == 0) ans++; 
    }
    cout << ans << endl; 
}

int main(){
    int test; 
    cin >> test; 
    while(test--){
        solve(); 
    }
    return 0; 
}
