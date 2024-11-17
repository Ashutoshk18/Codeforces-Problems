#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if(x==y) return x; 
    if(x>y) x -= y; 
    if(y>x) y -= x; 
    gcd(x, y);
}

void solve()
{
    int n; cin>>n; int arr[100]; 
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(gcd(arr[0], arr[1])<=2){}
}
int main()
{
    int test; cin>>test; 
    while(test--)
    {
        solve();
    }
}