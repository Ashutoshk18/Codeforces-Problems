#include <bits/stdc++.h>
using namespace std;

void inputs(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool logic(int arr[], int n)
{
    int a = n / 2;
    int b = n - a;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        st.insert(a);
    }
    if (st.size() > 2)
        return false;
    if (st.size() == 1)
        return true;
    if (n == 1 || n == 2)
        return true;
    if (n % 2 == 0)
    {
        int a = arr[0];
        int acount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a)
                acount++;
            else
                b++;
        }
        if (acount == n / 2)
            return true;
    }
    else
    {
        int a = arr[0];
        int acount = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a)
                acount++;
            else
                b++;
        }
        if (acount == n / 2 || b == n - (n / 2))
            return true;

        if (b == n / 2 || acount == n - (n / 2))
            return true;
    }
    return false;
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[110];
        inputs(n, arr);
        if (logic(arr, n) == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}