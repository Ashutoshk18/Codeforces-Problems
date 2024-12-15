#include<iostream>
using namespace std; 


//for testing same parity 
// b%2 == c%2 
// Parity is another term for odd/even. 
int check(int a, int b, int c){
    if(b%2 == c%2) return 1; 
    return 0; 
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c; 
    int one, two, three; 
    one = check(a, b, c); 
    two = check(b, a, c); 
    three = check(c, a, b); 
    cout << one << " " << two << " " << three << endl; 
}

int main(){
    int t; 
    cin >> t; 
    while(t--){
        solve(); 
    }
    return 0; 
}