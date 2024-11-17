#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k, n, w;
    cin>>k>>n>>w;
    //k--> Cost of 1st banana; n--> Initial dollars; w--> No. of bananas;
    int totalCost = 0; 
    for(long long i = w; i>=1; i--)
    {
        totalCost+=(i*k);
    }
    if(totalCost>n)
    {
        cout<<totalCost - n;
    }
    else
    {
        cout<<0;
    }
}