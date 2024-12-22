#include<iostream>
using namespace std; 
//According to remainder theorem the divisor and quotient are inversely proportional. If one grows one diminshes. So for the maximum divisor the quotient should be minimum and 2 is the minimum quotient we can have. Because taking 1 will result in the same number again. 
void solve(){
    int n; 
    cin >> n; 
    cout << n/2 << endl;
}

int main(){
    int t; cin >> t; 
    while(t--){
        solve(); 
    }
    return 0; 
    
}