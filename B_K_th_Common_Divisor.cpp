#include<iostream>
#include<vector>
using namespace std; 

int main(){
    int a, b, k; cin >> a >> b >> k; 
    vector<int> fact; 
    for(int i = 1; i <= max(a, b); i++){
        if(a % i == 0 && b % i == 0){
            // cout << i << " "; 
            fact.push_back(i);
        }
    }
    
    k == fact.size() ? k : k = k % fact.size(); 
    cout << fact[fact.size() - k] << endl; 
}