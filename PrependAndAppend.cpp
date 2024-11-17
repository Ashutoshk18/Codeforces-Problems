#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = -1;
    int multi = 0;
    for (int i = 0; i <= n - 1 - i; i++)
    {

        if (s[i] == '0' && s[n - i - 1] == '1')
        {
            multi++;
        }
        else if (s[i] == '1' && s[n - i - 1] == '0')
        {
            multi++;
        }
        else
        {
            break;
        }
    }
    cout << n - 2 * multi << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}