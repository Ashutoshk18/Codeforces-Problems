#include<bits/stdc++.h>
using namespace std;

void inputs(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i];
    }
}
int logic(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i<n-1; i++)
    {
        sum+=arr[i];
    }
    int x = 0 - sum;
    return x; 
}
int main()
{
    int test; cin>>test;
    for(int i = 0; i<test; i++)
    {
        int n; cin>>n;
        int arr[100];
        inputs(arr, n);
        cout<<logic(arr, n);
        cout<<endl;
    }
    return 0;
}