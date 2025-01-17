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
    int a, b; 
    cin >> a >> b;
    int r = b - a + 1; 
    while(r>= 1){
        int count = (b/r) - ((a-1)/r); 
        if(count >= 2){
            cout << r << endl; 
            break; 
        }
        else{
            r--; 
        }
    }
}

int main()
{
    int t = 1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}