#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin>>n>>k;
    int steps = 0;
    while(k)
    {
        if(n%10==0) 
        {
            n/=10;
            k--;
        }
        else{
            n--;
            k--;
        }
    }
    cout<<n;

}