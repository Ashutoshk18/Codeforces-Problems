#include<bits/stdc++.h>
using namespace std; 

void solve()
{
    int n, m; cin >> n >> m; 
    vector<vector<char>> v(n, vector<char>(m)); //most important line of this decade.
    int maxi = 0;  //v(size, value@eachpoint)
    for(int i = 0; i<n; i++)
    {
        int count = 0; 
        for(int j = 0; j<m; j++)
        {
            cin >> v[i][j];
            if(v[i][j] == '#')
            {
                count++;
            }
        }
        maxi = max(count, maxi);
        // cout<<"Value of MAXI every time: " << maxi <<endl;
    }
    // cout<<"Value of Maxi: "<< maxi <<endl; 
    int valueOfI = -1; int valueOfJ = -1; 
    for(int i = 0; i<n; i++)
    {
        int count = 0; 
        for(int j = 0; j<m; j++)
        {
            if(v[i][j] == '#')
            {
                count++;
            }
        }
        if(maxi == count)
        {
            valueOfI = i+1; 
        }
    }
    for(int j = 0; j<m; j++)
    {
        int count = 0; 
        if(v[valueOfI-1][j] == '#')
        {
            valueOfJ = j;
            break; 
        }
    }
    int f = maxi / 2 + 1; 
    cout << valueOfI << " " << valueOfJ+f << endl;
}
int main()
{
    int t; cin>>t; 
    while(t--)
    {
        solve();
    }
}