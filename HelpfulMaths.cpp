#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    vector<char> v;
    for (int i = 0; i < x.length(); i++)
    {
        if(i%2==0)
        {
            int a = x[i];
            v.push_back(a);
        }
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1) cout<<"+";
    }
    
    return 0;
}