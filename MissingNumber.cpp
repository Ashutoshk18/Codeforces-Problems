#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n; cin>>n; vector<int> arr(n); 
    ll int sum2 = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        sum2 += arr[i];
    }
    ll int sum = n * (n+1) / 2; 
    cout<<sum-sum2<<endl;
    return 0;
}