#include<iostream>
#include<vector>
#define ll long long
using namespace std; 

void solve(){
    int n; 
    cin >> n; 
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];  
    }
    ll pos = 0, ans = 0; 
    for(int i = 0; i < n-1; i++){
        if(v[i] > 0){
            pos+=v[i]; 
        }
        else if(v[i] < 0){
            if(pos > 0){
                pos = pos - abs(v[i]);
                if(pos < 0){
                    ans += pos; 
                    pos = 0; 
                }
            }
            else ans += v[i];
        }
    }
    cout << abs(ans) << endl; 
}

int main(){
    int t; 
    cin >> t; 
    while(t--){
        solve(); 
    }
}