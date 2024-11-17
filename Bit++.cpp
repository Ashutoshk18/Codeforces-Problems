// A. Bit++  "https://codeforces.com/problemset/problem/282/A"
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n; 
    cin>>n;
    int result = 0;
    for(int i=0; i<n; i++)
    {
    string x;
    cin>>x;
    if( x=="++X" || x=="X++")
    {
        result++;
    }
    else if( x=="--X" || x=="X--")
    {
        result--;
    }
    }
    cout<<result;
    //  X++
    return 0;
}