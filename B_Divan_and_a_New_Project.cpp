//Status: NOT SOLVED
#include<bits/stdc++.h>
using namespace std; 

void solve(){
    int n; 
    cin >> n; 
    vector<pair<int, int>> visits; 
    vector<int> dup(n, 0); 
    for(int i = 0; i < n; i++){
        int x; cin >> x;  
        visits.push_back({x, i}); 
        dup[i] = x; 
    }
    sort(dup.begin(), dup.end()); 
    // for(int i = 0; i < n; i++){
    //     cout << dup[i] << " "; 
    // }
    // cout << endl; 
    int time = 0; 
    for(int i = 0; i < n; i++){
        time += dup[i] * (n + (n-i)%2 - i ); 
    }
    cout << time << endl; 
    cout << 0 << " "; 
    vector<pair<int, int>> mpp; 
    for(int i = 0; i < n; i++){
        int x = (n + (n-i)%2 - i)/2; 
        if(i % 2 == 0){

            mpp.push_back({i, x});
        }
        else{
            mpp.push_back({i, (-1 * x)});
        }
    }
    for(int i = 0; i < n; i++){
        // cout << visits[i].first << endl; 
        cout << mpp[mpp[i].first].second << " ";
    }
    cout << endl; 
}
int main(){
    int t = 1; 
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0; 
}