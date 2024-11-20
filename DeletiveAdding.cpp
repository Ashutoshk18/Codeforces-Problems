#include<bits/stdc++.h>
using namespace std;

void solve() {
	string a, b;
	cin >> a >> b;
	for (int j = 0; j < b.length(); j++) {
		int count = 0;
		for (int i = 0; i < a.length(); i++) {
			// cout << b[j] << " " << a[i] << endl;
			if (b[j] == a[i]) {
				count++;
			}
		}
		// cout << count << endl;
		if (!count) {
			cout << "NO" << endl;
			return;
		}
	}
	// cout << "One done" << endl;
	cout << "YES" << endl;
}

int main() {
	int test; cin >> test;
	while (test--) {
		solve();
	}
	return 0;
}