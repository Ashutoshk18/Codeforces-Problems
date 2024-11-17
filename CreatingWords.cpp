#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string a, b; 
    cin>>a>>b; 
    swap(a[0], b[0]);
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }
}