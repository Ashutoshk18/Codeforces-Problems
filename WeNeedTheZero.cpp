#include<bits/stdc++.h>
using namespace std;

void solve()
{
    //a[] >= 0;
    int a[1000]; int n; cin>>n;
    int operation = 0; 
    vector<int> b; 
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        operation = (operation ^ a[i]);

    }
    if(operation == 0) cout<<0<<endl;
    else {}
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