#include<iostream>
#include<string> 
using namespace std; 
void solve(){
    string s; cin >> s; 
    int cnt1 = 0, cnt2 = 0; 
    for(int i = 0; i < s.length(); i++){
        s[i] == '0' ? cnt1++ : cnt2++; 
    }
    int ans = 0; 
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0'){
            if(cnt2 > 0){ 
                cnt2--; 
                ans++; 
            }
            else break; 
        }
        else{
            if(cnt1 > 0){
                cnt1--;
                ans++; 
            }
            else break; 
        }
    } 
    cout << s.length() - ans << endl; 
}
int main(){
    int t = 1; cin >> t; 
    while(t--){
        solve(); 
    }
    return 0; 
}