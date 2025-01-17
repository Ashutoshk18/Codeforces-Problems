#include<iostream>
using namespace std; 
int main()
{
    int n; cin >> n; 
    int arr[100001]; int ans = 0; 
    for(int i = 0; i < n; i++){
        int x; cin >> x; 
        ans += (x-1);
    }
    cout << ans << endl; 
}