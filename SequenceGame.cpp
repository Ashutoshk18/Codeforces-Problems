#include<bits/stdc++.h>
using namespace std;
//syntax ---> #define _name_ _datatype_
// #define int long long
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<long long> a;
        for(int i = 0; i<n; i++)
        {
            int x; cin>>x;
            if(i/*i!=0 */ && a.back() > x) a.push_back(1);
            a.push_back(x);
        }

        cout<<a.size()<<endl;
        for(long long el : a)
        {
            cout<< el <<" ";
        }
        cout<<endl;
    }
    return 0;
}