#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin>>n; int arr[101]; 
    int even=0, odd=0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0) even++;
        else odd++;
    }
    if(even == n || odd == n) cout<<n<<endl;
    else
    {
        if(n%2==0 && even == odd) cout<<0<<endl; 
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