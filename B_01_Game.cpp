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
    string s; 
    cin >> s;
    vi arr; int zeroes = 0, ones = 0; 
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') zeroes++; 
        if(s[i] == '1') ones++; 
    }
    int pairs = min(zeroes, ones); 
    if(zeroes == 0 || ones == 0){
        cout << "NET" << endl; 
        return; 
    }
    if(pairs % 2 == 0){
        cout << "NET" << endl; 
    }
    else{
        cout << "DA" << endl; 
    }   
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