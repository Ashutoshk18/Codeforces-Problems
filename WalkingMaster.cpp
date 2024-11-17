#include <iostream>
using namespace std;
int mod(int x)
{
    if (x < 0)
        return (-1) * x;
    else
        return x;
}
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b < d)
    {
        int steps = 0, x = 0;
        x = d - b;
        x = mod(x);
        steps = x;
        int k = a + x;
        if (k >= c)
        {
            while (k > c)
            {
                k--;
                steps++;
            }
            if (k == c)
                cout << steps << endl;
            else
                cout << "-1" << endl;
        }
        else
            cout << "-1" << endl;
    }
    else if (b == d)
    {
        int steps = 0;
        if (a >= c)
        {
            int x = a - c;
            x = mod(x);
            steps = x;
            cout << steps << endl;
        }
        else
            cout << "-1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
void solve2()
{
    int a, b, c, d; cin>>a>>b>>c>>d; 
    if(b<=d && c<= (a + d - b))
    {
        cout << d - b + (a + d - b - c) << endl; // d-b>=0 as d>=b
    }
    else cout<<"-1"<<endl;
}
int main()
{
    // Write C++ code here
    int test;
    cin >> test;
    while (test--)
    {
        solve2();
    }

    return 0;
}
