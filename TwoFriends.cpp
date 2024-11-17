#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; 
    vector<int> ff; 
    for(int i = 0; i<n; i++)
    {
        int x; cin>>x; 
        ff.push_back(x);
    }
    bool check = false; 
    for(int i = 0; i<n; i++)
    {
        int p = ff[i];
        if(ff[p-1] == (i+1)) 
        {
            check = true;
            break;
        }
    }
    if(check) cout<<"2"<<endl;
    else cout<<"3"<<endl;
}
int main() {
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }

    return 0;
}