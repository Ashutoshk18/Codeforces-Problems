#include<bits/stdc++.h>
using namespace std;
void inputs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool logic(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k) return true;
    }
    return false;
}

int main()
{
    int test; 
    cin>>test;
    for(int i=0; i<test; i++)
    {
        int n, k;
        cin>>n>>k;
        int arr[100] = {0};
        inputs(arr, n);
        if(logic(arr, n, k) == 1) cout << "YES";
        else cout<<"NO";
        cout<<endl;
    }
}