#include <iostream>
using namespace std;
bool solve(int a[], int n)
{
    for(int i = 0; i<14; i++)
    {
        if(n%a[i]==0) return true;
    }
    return false;
}
int main() {
    // Write C++ code here
    int a[14] ={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n; cin>>n;
    if(solve(a,n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}
