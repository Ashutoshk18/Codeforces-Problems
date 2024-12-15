#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

int ops(string& digit, string& num){
    int x = digit[0]; 
    int y = digit[1]; 
    int j = num.size()-1; 
    int steps = 0; 
    while(j > 0 && num[j] != y){
        j--;
        steps++; 
    }
    int i = j - 1; 
    while(i > 0 && num[i] != x){
        i--; 
        steps++;
    }
    return steps; 
}

void solve(){
    ll x; 
    cin >> x; 
    string num = to_string(x); 
    vector<string> digits = {"00", "25", "50", "75"}; 
    ll ans = 1e9; 
    for(auto digit : digits){
        ll mini = ops(digit, num); 
        ans = min(mini, ans);
    }
    cout << ans << endl; 
}

int main(){
    int t = 1; 
    cin >> t; 
    while (t--){
        solve(); 
    }
    return 0; 
}