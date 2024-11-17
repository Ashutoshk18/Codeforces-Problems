#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t; 
    cin >> t; 
    vector<int> p; 
    for(int i = 0; i<t; i++)
    {
        int x; 
        cin >> x; 
        p.push_back(x);
    }
    int sum = 0; 
    vector<int> groups; 
    for(int i = 1; i<t; i++)
    {
        if(p[i-1] == p[i])
        {
            sum++;
        }
        else
        {
            groups.push_back(sum);
            sum = 0; 
        }
    }
    for(int i = 0; i < groups.size(); i++)
    {
        cout << groups[i] << " ";
    }
    cout << endl; 
    cout << groups.size() << endl; 
    
    return 0;
}