#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s; 
    int len = s.length();
    if(len>10) cout<<s[0]<<len - 2 <<s[len-1]<<endl;
    else cout<<s<<endl;
    
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