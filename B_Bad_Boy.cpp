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
    int a, b, x, y; 
    cin >> a >> b >> x >> y; 
    int x1, x2, y1, y2; 
    if(a&1){
        if(x < (a+1)/2){
            x1 = a; 
            x2 = 1;
        }
        else{
            x1 = 1; 
            x2 = a;
        }
    }
    else{
        if(x < a/2){
            x1 = a; 
            x2 = 1; 
        }
        else{
            x1 = 1;  
            x2 = a; 
        }
    }
    if(b&1){
        if(y < (b+1)/2){
            y1 = b; 
            y2 = 1; 
        }
        else{
            y1 = 1; 
            y2 = b;
        }
    }
    else{
        if(y < b/2){
            y1 = b; 
            y2 = 1; 
        }
        else{
            y1 = 1; 
            y2 = b; 
        }
    }
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl; 
    // cout << 1 << " " << 1 << " " << n << " " << m << "\n"; also an anwer
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