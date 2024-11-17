#include<iostream>
using namespace std;
#define ll long long

void solve() {
	ll w;
	cin >> w;
	ll max_bus = 0, min_bus = 0;
	ll rem_four = w % 4, rem_six = w % 6;
	if (w % 2 != 0) {
		cout << "-1" << endl;
		return;
	}
	//Max Bus
	max_bus = w / 4;

	//Min Bus
	if (w % 6 == 0) {
		min_bus = w / 6;
	}
	else if (rem_six == 2) {
		if (w >= 6) {
			min_bus = w / 6 - 1 + 2;
		}
		else {
			min_bus = -1;
		}

	}
	else if (rem_six == 4) {
		min_bus = w / 6 + 1;
	}
	else {
		min_bus = -1;
	}
	if (min_bus == -1) {
		cout << "-1" << endl;
	}
	else cout << min_bus << " " << max_bus << endl;
}

int main() {
	int test;
	cin >> test;
	while (test--) {
		solve();
	}
	return 0;
}