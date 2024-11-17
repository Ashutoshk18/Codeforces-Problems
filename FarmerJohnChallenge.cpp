#include<bits/stdc++.h>
using namespace std; 

void solve()
{
    int n, k; cin>>n>>k; 
    if(k==n)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<"1"<<" ";
        }
        cout<<endl;
        return; 
    }
    if(k==1)
    {
        for(int i = 0; i<n; i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<"-1"<<endl;
}

int main()
{
    int test = 1; 
    cin>>test; 
    while(test--)
    {
        solve();
    }
    return 0;
}