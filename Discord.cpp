#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n, m;
    cin >> n >> m;
    int arr[52][52];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    map<int, set<int>> mp;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                mp[arr[i][j]].insert(arr[i][j + 1]);
            }
            else if (j == n - 1) {
                mp[arr[i][j]].insert(arr[i][j - 1]);
            }
            else {
                mp[arr[i][j]].insert(arr[i][j - 1]);
                mp[arr[i][j]].insert(arr[i][j + 1]);
            }
        }
    }
    int e = -1;
    n % 2 == 0 ? e = n / 2 : e = n / 2 + 1;
    int cnt = 0, sum = 0;
    for (auto pair : mp) {
        // if(cnt == e){
        //     cout << sum << endl;
        //     return 0;
        // }
        // cout << "Key: " << pair.first << " -> Values: ";
        sum = sum + n - 1 - pair.second.size();
        // for (int val : pair.second) {
        //     cout << val << " ";
        // }
        cnt++;
        // cout << endl;
    }
    cout << sum / 2 << endl;
    return 0;
}
