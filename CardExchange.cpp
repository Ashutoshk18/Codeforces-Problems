#include <bits/stdc++.h>
using namespace std;

// bool check(vector<int> &c, int n, int k)
// {
//     for (int i = 1; i < 100; i++)
//     {
//         int count = 0;
//         bool isTrue = false;
//         for (int j = 0; j < n; j++)
//         {
//             if (c[j] == i)
//             {
//                 count++;
//                 if (count >= k)
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }
// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> c;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         c.push_back(x);
//     }
//     bool h = check(c, n, k);
//     if (h)
//         cout << k - 1 << endl;
//     else
//         cout << n << endl;
// }
void solve2()
{
    int n, k; cin>>n>>k; 
    map<int, int> m; 
    int mx = 0; 
    for(int i = 0; i<n; i++)
    {
        int x; 
        cin>>x; 
        m[x]++; 
        mx = max(mx, m[x]);
    }
    if(mx >=k )
    {
        cout << k - 1 <<endl;
        return; 
    }
    cout<<n<<endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve2();
    }
}