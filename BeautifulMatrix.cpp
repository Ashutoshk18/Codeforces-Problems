#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int ith, jth; 
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                ith = i+1; jth = j+1;
            }
        }
    }
    if(ith>+3 && jth>+3) cout<<(ith - 3) + (jth - 3)<<endl;
    else if(ith<=3 && jth>=3) cout<<(3-ith) + (jth - 3)<<endl;
    else if(ith>=3 && jth<=3) cout<<(ith - 3) + (3 - jth)<<endl;
    else cout<<(3-ith) + (3-jth); 

    return 0;
}