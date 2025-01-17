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
    ll x; cin >> x; //This flag will check the last digit. 
    bool flag = true; 
    while(x >= 10){ //Will make sure that the number after loop will be of one digit only.
        int digit = x%10; 
        if(flag){
            flag = false; 
            if(digit > 8){
                NO; return; 
            }
        }
        else if(digit == 0){
            NO; return; 
        }
        x/=10;
    }
    if(x == 1) YES; 
    else NO; 
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