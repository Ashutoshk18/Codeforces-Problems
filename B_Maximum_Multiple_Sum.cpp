#include<bits/stdc++.h>
using namespace std;

//define
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
#define f first
#define s second

//typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;

void solve()
{
    int n; cin >> n; 
    // int sum1 = (n/2 * (4 + (n/2 -1)*2)) / 2; 
    // int sum2 = (n/3 * (6 + (n/3-1)*3)) / 2;
    //Even this is not neccessary because 3 will be the answer in only one case and that is when n = 3. 
    // sum2 > sum1 ? cout << 3 << endl : cout << 2 << endl;
    n == 3 ? cout << 3 << endl : cout << 2 << endl; 
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}