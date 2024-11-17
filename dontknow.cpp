#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> num;
    while (n)
    {
        int ld = n % 10;
        num.push_back(ld);
        n /= 10;
    }
    cout << 9 * (num.size() - 1) + num[num.size()-1]<<endl;
}
void solve2()
{

}
int main()
{
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }
    return 0;
}