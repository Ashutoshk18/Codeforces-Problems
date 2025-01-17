#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
void solve(){
    int n; cin >> n;
    int dup = n; 
    vector<int> obs;
    int mostMin = INT_MAX;  
    while(dup--){
        int x; cin >> x; 
        vector<int> arr(x); 
        for(auto &i : arr){
            cin >> i; 
        }
        int mini1 = *min_element(all(arr)); 
        mostMin = min(mostMin, mini1); 
        arr.erase(find(all(arr), mini1)); 
        obs.push_back(*min_element(all(arr))); 
    }
    cout << mostMin + accumulate(all(obs), 0LL) - *min_element(all(obs)) << endl; 
}

int main() {
	// your code goes here
	int t; cin >> t; 
	while(t--){
	    solve(); 
	}

}
