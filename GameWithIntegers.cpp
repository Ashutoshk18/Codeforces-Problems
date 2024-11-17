#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        int n;
        cin >> n;
        int counter = 0;
        for (int chances = 1; chances <= 10; chances++)
        {
            if (n % 3 == 0)
            {
                break;
            }
            if (n == 1 || n == 2)
                n += 1;
            if (n % 3 == 1)
                n -= 1;
            if (n % 3 == 2)
                n += 1;
            // After Vanya's Move
            if (n % 3 == 0)
            {
                counter++;
                break;
            }
        }
        if (counter == 0)
            cout << "Second";
        else
            cout << "First";
        cout<<endl;
    }
    return 0;
}
