#include<bits/stdc++.h>
using namespace std;

int logic(string x, string s, int n, int m)
{
    // if(n>m) return -1;
    // int div = 25/m;
    string add;
    if(x.find(s) != string::npos) return 0;
    for(int i = 0; i<5; i++)   // maximum answer can be 5 that's why loop is iterated till 5.
    {
        add=x;
        x = x.append(add);
        if(x.find(s) != string::npos) return i+1;
    }
    return -1;
}
int main()
{
    int test; cin>>test; 
    for(int i = 0; i<test; i++)
    {
        int n, m; cin>>n>>m;
        string x, s; cin>>x>>s;
        cout<<logic(x, s, n, m);
        cout<<endl;
    }
    return 0;
}