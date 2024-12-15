#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n)); 
    for(int i = 0; i < n; i++){
        string s; 
        cin >> s; 
        for(int j = 0; j < n; j++){
            if(s[j] == '0'){
                arr[i][j] = 0; 
            }
            else{
                arr[i][j] = 1;
            }
        }
    }
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << arr[i][j] <<" "; 
    //     }
    //     cout << endl; 
    // }
    if (n % 2 == 0)
    {
        int cnt = 0;
        int i = 0, x = (n - 2) / 2;
        for (i = 0; i < x+1; i++)
        {
            for (int j = i; j < n - i - 1; j++)
            {
                int step = arr[i][j] + arr[n - j - 1][i] + arr[j][n - i - 1] + arr[n - i - 1][n - j - 1];
                if (step == 0 || step == 4)
                {
                    cnt += 0;
                }
                else if (step == 1 || step == 3)
                {
                    cnt += 1;
                }
                else
                    cnt += 2;
            }
        }
        cout << cnt << endl;
        return;
    }
    else
    {
        int cnt = 0;
        int i = 0, x = (n + 1) / 2;
        for (i = 0; i < x - 1; i++)
        {
            for (int j = i; j < n - i - 1; j++)
            {
                int step = arr[i][j] + arr[n - j - 1][i] + arr[j][n - i - 1] + arr[n - i - 1][n - j - 1];
                if (step == 0 || step == 4)
                {
                    cnt += 0;
                }
                else if (step == 1 || step == 3)
                {
                    cnt += 1;
                }
                else
                    cnt += 2;
            }
        }
        cout << cnt << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}