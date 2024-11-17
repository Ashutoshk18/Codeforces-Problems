#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[100];
    int count = 0, maxi = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            count++;
        else count = 0;
        if(maxi<count) maxi = count; 
    }
    cout<<maxi<<endl;
}
int main()
{
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }
}