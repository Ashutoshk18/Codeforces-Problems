#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, a, b; cin>>n>>a>>b; 
    if(n==b & b==a) cout<<"YES"<<endl;
    else if(a+b>n) cout<<"NO"<<endl;
    else if((n-(a+b))>=2) cout<< "YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }
}