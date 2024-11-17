//Hard question
#include<bits/stdc++.h>
using namespace std;
#define nl endl;
void bubblesort(int arr[], int size)
{
    for(int i = 0; i<size - 1; i++)
    {
        for(int j = 0; j<size-1-i; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j+1], arr[j]);
        }
    }
}
int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int a[100];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        bubblesort(a, n);
        if(a[0] == a[n-1]) 
        {
            cout<<"-1"<<nl;
        }
        else
        {
            int p = n-1;
            while(a[p] == a[n-1]) p--; //most important line;
            cout<<p+1<<" "<<n-1-p;
            cout<<nl;
            for(int i = 0; i<p+1; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<nl;
            for(int i = p+1; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<nl;
        }
    }
    return 0;
}