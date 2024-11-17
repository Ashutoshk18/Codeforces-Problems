#include <bits/stdc++.h>
using namespace std;
int mod(int x)
{
    if (x < 0)
        return (-1) * x;
    else
        return x;
}
int main()
{
    string a, b;
    cin >>a>>b;

    for (auto& x : a) { 
        a = tolower(a); 
    } 
    cout<<a; 
    return 0;
}