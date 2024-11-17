#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int test; cin>>test; 
    while(test--)
    {
        long long a, b, c;
        cin>>a>>b>>c;
        ll common = c%2;
        if(common == 0) 
        {
            //even
            if(a>b)
                cout<<"First"<<nl;
            else 
                cout<<"Second"<<nl;
        }
        else
        {
            //odd
            if(b>a) 
                cout<<"Second"<<nl;
            else
                cout<<"First"<<nl;
        }
    }
    return 0;
}   