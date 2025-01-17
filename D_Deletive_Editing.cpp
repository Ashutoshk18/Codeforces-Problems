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
    string s, t; 
    cin >> s >> t; 
    int next = 0; 
    map<char, int> smap, tmap; 
    for(auto ch : s){
        smap[ch]++; 
    } 
    for(auto ch : t){
        tmap[ch]++; 
    }
 
    int i = 0, j = 0; 
    while(i < s.length() && j < t.length()){
        if(s[i] == t[j]){
            if(smap[s[i]] < tmap[t[j]]){
                break;
            }
            if(smap[s[i]] == tmap[t[j]]){
                tmap[t[j]]--; 
                j++;
            }
        }
        smap[s[i]]--; 
        i++; 
    }
    if(j == t.length()) YES; 
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