#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(ll a, ll b){
    if(a==0){
        return b;
    }
    return gcd(b%a, a); 
}

int main() {
	int n; 
	cin >> n; 
	vector<int> arr(n); 
	for(int i = 0; i < n; i++){
	    cin >> arr[i]; 
	}
	if(n == 1){
	    cout << 0 << endl; 
	    cout << arr[0] << endl; 
	    return 0; 
	}

	int step = 0; 
	vector<int> ans; 
	for(int i = 1; i < n; i++){
	    ans.push_back(arr[i-1]); 
	    if(gcd(arr[i-1], arr[i]) != 1){
	        ans.push_back(1); 
	        step++; 
	    }
	    if(i == n-1){
	        ans.push_back(arr[i]); 
	    }
	}
	cout << step << endl; 
	for(int i = 0; i < ans.size(); i++){
	    cout << ans[i] << " "; 
	}
	return 0; 
}
