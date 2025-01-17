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
    string s; cin >> s; 
    int m = 0, n = s.size(); 
    int prev[26] = {0}; 
    for(auto i : s){
        if(prev[i - 'a']){
            m+=2; 
            for(int j = 0; j < 26; j++){
                //Resetting
                prev[j] = false; 
            }
        }
        else{
            prev[i-'a'] = true;
        }
    }
    cout << n - m << endl; 
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