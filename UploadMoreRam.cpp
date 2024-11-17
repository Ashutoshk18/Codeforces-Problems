#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    cout << k * (n - 1) + 1 << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}