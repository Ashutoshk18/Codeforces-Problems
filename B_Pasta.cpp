#include<bits/stdc++.h>
using namespace std; 
#define ll long long

int search(ll x, vector<ll> arr){
    int low = 0; 
    int high = arr.size() - 1 ;
    while(low <= high){
        int mid = (low + high) / 2; 
        if(x == arr[mid]){ 
            return mid; 
        }
        else if(x < arr[mid]){
            high = mid - 1; 
        }
        else{
            low = mid + 1; 
        }
    }
    return -1; 
}

void solve(){
    int n, m; 
    cin >> n >> m; 
    vector<ll> pasta(n); 
    for(int i = 0; i < n; i++){
        cin >> pasta[i];
    }
    sort(pasta.begin(), pasta.end());
    bool flag = true;  
    for(int i = 0; i < m; i++){
        ll x; 
        cin >> x; 
        int index = search(x, pasta); 
        // cerr << index << endl; 
        if(index<0){
            flag = false;  
        }
        else{
            pasta.erase(pasta.begin() + index); 
        }
    }
    if(flag) cout << "Yes" << endl; 
    else cout << "No" << endl; 
}

int main(){
    int t = 1; 
    while(t--){
        solve(); 
    }
    return 0; 
}