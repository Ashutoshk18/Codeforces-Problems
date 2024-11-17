#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[], int size)
{
    int sum = 0; 
    for(int i = 0; i<size; i++)
    {
        sum += arr[i];
    }
    if(sum%2 == 0) return true;
    else return false;
}
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int arr[50];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(solve(arr, n)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}