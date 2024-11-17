#include<bits/stdc++.h>
using namespace std; 

int main()
{
    string s; cin>>s; 
    int n = s.length();
    int a = 0, c = 0, g = 0, t=0, maxi = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>s[i];
        if(s[i] == 'A') a++;
        else a = 0;
        if(s[i] == 'C') c++;
        else c = 0;
        if(s[i] == 'G') g++;
        else g = 0;
        if(s[i] == 'T') t++;
        else t = 0;
        int x = max(a, c);
        x = max(x, g); x = max(x, t);
        maxi = max(maxi , x);
    }
    cout<<maxi<<endl;
}