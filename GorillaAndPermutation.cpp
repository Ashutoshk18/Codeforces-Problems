#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, k; cin >> n >> m >> k; 
    vector<int> f;
    for(int i = n; i>m; i--)
    {
        f.push_back(i);
    }
    for(int i = 1; i<=m; i++)
    {
        f.push_back(i);
    }
    for(int i = 0; i<f.size(); i++)
    {
        cout<< f[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}