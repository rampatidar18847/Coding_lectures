#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapalternate(int arr[])
{

    for (int i = 0; i < 7; i = i + 2)
    {
        if (i + 1 < 7)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int arr[10];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    swapalternate(arr);
    printarray(arr);
}