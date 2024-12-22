#include<bits/stdc++.h>
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	/*1. only a[1] contains in the subsegment. a[n] - {a1, a2, ... , an-1}
	2. only a[n] contains in the subsegment. {a2, a3, ... an} - a[1]
	3. both a[n] and a[i] contains in the subsegment. arr[i] - arr[i+1]*/
	int ans = v[n] - v[1];
	for (int i = 1; i <= n - 1; i++) {
		ans = max(ans, v[n] - v[i]);
	}
	for (int i = 2; i <= n; i++) {
		ans = max(ans, v[i] - v[1]);
	}
	for (int i = 1; i <= n - 1; i++) {
		ans = max(ans, v[i] - v[i + 1]);
	}
	cout << ans << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}