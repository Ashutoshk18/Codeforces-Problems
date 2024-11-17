#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(101, 0);
    //vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        //v.push_back(x)
        v[x]++; //kind of hashing
    }
    // vector<int> s;
    // for (int i = 1; i <= 100; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[j] == i)
    //         {
    //             sum++;
    //         }
    //     }
    //     s.push_back(sum);
    // }
    int sum2 = 0; 
    for(int i = 0; i<v.size(); i++)
    {
        sum2 += v[i]/3;
    }
    cout<<sum2<<endl;
}
int main()
{
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}