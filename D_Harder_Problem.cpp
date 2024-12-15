#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin >> n; 
    vector<int> a(n); 
    set<int> s, perm; 
    vector<int> ans; 
    for(int i = 0; i < n; i++){
        cin >> a[i];  
        s.insert(a[i]); 
    }
    for(int i = 1; i <= n; i++){
        perm.insert(i); 
    }
    //.count(<value>) function only works on set: 
        //if the value is find it returns 1 else it returns 0; 
    for(int x : a){
        if(s.count(x)){
            ans.push_back(x); 
            s.erase(x); 
            perm.erase(x); 
        }
    }
    for(int x : perm){
        ans.push_back(x); 
    }
    for(auto x : ans){
        cout << x << " "; 
    }
    cout << endl; 

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