#include<iostream>
using namespace std;

int input(int n, string &s)
{
    int counter = 0; 
    int check = -1; 
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '.' && s[i+1]==s[i] && s[i-1]==s[i])
        {
            return 2;  
            break;
        }
        else
        {
            if(s[i]=='.')
            {
                counter++;
            }
        }
    }
    if(counter!=0)
    {
        return counter; 
    }
    else{
        return 0;
    }
}
int main()
{
    int test;
    cin>>test; 
    for(int i = 0; i<test; i++)
    {
        int n; string s;
        cin>>n>>s; 
        cout<<input(n, s);
        cout<<endl;
    }
    return 0;
}