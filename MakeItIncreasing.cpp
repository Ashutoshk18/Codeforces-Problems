#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void solve() {
	ll n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		arr.push_back(x);
	}
	int ops = 0;
	for (int i = n - 1; i > 0; i--) {
		if (arr[i] == 0) {
			cout << "-1" << endl;
			return;
		}
		while (arr[i] <= arr[i - 1]) {
			arr[i - 1] /= 2;
			ops++;
		}
	}
	cout << ops << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		solve();
	}
	return 0;
}