#include<iostream>
using namespace std; 
#define ll long long
int main(){
    while(true){
        ll n; cin >> n;
        if(n==0){
            return 0; 
        }
        for(ll i = 2; i*i <= n; i++){
            int cnt = 0;  
            while(n%i==0){
                cnt++; 
                n/=i; 
            }
            if(cnt!=0){
                cout << i << "^" << cnt << " "; 
            }
        }
        if(n > 1){
            cout << n << "^" << 1 << " "; 
        }
        cout << endl; 
    }
}