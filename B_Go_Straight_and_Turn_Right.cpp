#include<iostream>
#include<string>
using namespace std;
#define ll long long

void solve()
{
    int n; string s; 
    cin >> n >> s; 
    int d = 0; 
    int x = 0, y = 0; 
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            d++; 
            continue; 
        }
        if(d%4==0){
            x++; 
        }
        else if(d%4==1){
            y--; 
        }
        else if(d%4==2){
            x--; 
        }
        else if(d%4 == 3){
            y++; 
        }
    }
    cout << x << " " << y << endl; 
}

int main()
{
    int t = 1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}