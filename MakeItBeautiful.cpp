#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin>>n; int arr[51];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(arr[0] == arr[n-1]) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<arr[n-1]<<" "; //last element;
        for(int i = 0; i<n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int test; cin>>test;
    while(test--)
    {
        solve();
    }
}