#include <bits/stdc++.h>
using namespace std; 

void solve()
{
    vector<int> p; set<int> s; 
    for(int i = 0; i<3; i++)
    {
        int x; cin>>x; 
        s.insert(x); p.push_back(x);
    }
    int sum = p[0] + p[1] + p[2];
    // cout << p[0] << p[1] << p[2] <<endl;
    if(sum%2==1)
    {
        cout<<"-1"<<endl;
        return; 
    } 
    if(s.size() == 1 && p[2] == 0) 
    {
        cout << 0 << endl;
        return;
    }
    if(s.size() == 1) 
    {
        cout << sum / 2 << endl;
        return; 
    }
    if(s.size() == 2)
    {
        int draws = p[0];
        draws += min(p[2], p[1]);
        cout << draws << endl; 
        return ; 
    }
    cout << p[0] * 2 << endl;

    

}

int main()
{
    int t; cin>>t; 
    while(t--)
    {
        solve();
    }
}