#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, H, M;
    cin >> n >> H >> M;  
    int sleep = 60*H + M;
    int sleep_time = 24 * 60;
    for(int i = 0; i < n; i++){
        int h, m;
        cin >> h >> m;
        int time = 60*h + m - sleep;
        // cout << time << endl;
        if(time == sleep){
            cout << 0 << " " << 0 << endl; 
            return; 
        }
        if(time < 0){
            //we know that alarm is before sleep time
            //it will pass through 1440(00:00)
            time += 1440; 
        }
        sleep_time = min(sleep_time, time); 

    }
    cout << sleep_time/60 << " " << sleep_time%60 << endl;  
}

int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}