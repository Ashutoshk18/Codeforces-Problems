#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        if (a < 0)
        {
            arr[i] = (-1) * a;
        }
    }
    int small = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    cout<<small;

    return 0;
}