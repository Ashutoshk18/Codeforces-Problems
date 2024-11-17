#include <bits/stdc++.h>
using namespace std;

bool sortChecker(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] < arr[i])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool logic(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        for (int i = 1; i < size; i++)
        {
            if (i == size - 1)
                break;
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    return sortChecker(arr, size);
}
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[12];
        input(arr, n);
        int sorted = sortChecker(arr, n);
        if (sorted != 0)
        {
            cout << "YES";
        }
        else
        {
            int output = logic(arr, n);
            if (output != 0)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        cout << endl;
    }
}