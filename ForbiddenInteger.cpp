#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, int x)
{
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    else if (k == 1)
    {
        cout << "NO" << endl;
    }
    else if (k == 2)
    {
        if (n % 2 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << n / k << endl;
            while (n)
            {
                cout << "2 ";
                n -= 2;
            }
            cout << endl;
        }
    }
    else if (n % 2 == 0 && k > 2)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << "2 ";
        }
        cout << endl;
    }
    else
    {
       int twos = n/2 - 1;
       int three = (n - twos*2)/3;
       cout<<"YES"<<endl;
       cout<<twos+three<<endl;
       for(int i = 0; i<three; i++)
       {
            cout<<"3 ";
       }
       for(int i = 0; i<twos; i++)
       {
            cout<<"2 ";
       }
       cout<<endl;

    }
}

int main()
{

    int test;
    cin >> test;

    while (test--)

    {

        int n, k, x;

        cin >> n >> k >> x;

        solve(n, k, x);
    }

    return 0;
}