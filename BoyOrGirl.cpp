#include<bits/stdc++.h>
using namespace std;

int main()
{
    string userid;
    cin>>userid;

    int hash[26] = {0};
    for(int i=0; i<userid.size(); i++)
    {
        hash[userid[i]-'a']++;
    }
    int counter = 0;
    for(int i=0; i<26; i++)
    {
        if(hash[i]!=0)
        {
            counter++;
        }
    }
    if(counter%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}