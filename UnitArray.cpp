#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[100];
    int neg = 0, pos = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
            neg++;
        else
            pos++;
    }
    if (pos - (-1*neg) == 0 || neg == 0)
        cout << 0 << endl;
    else
    {
        int add = 0;
        // int a = pos, b = neg;
        while (pos < neg)
        {
            pos += 1;
            neg -= 1;
            add++;
        }
        if (neg % 2 == 0)
            cout << add << endl;
        else
        {
            if (neg - 1 <= pos)
                add++;
            else if (neg + 1 <= pos)
                add++;
            cout << add << endl;
        }
    }
    // if(neg%2==0)
    // {
    //     //If any change is made then it will be of 2 or multiple of 2.
    //     int count = 0;
    //     while(pos<neg)
    //     {
    //         pos+=1; neg-=1;
    //         count++;
    //     }
    // }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}