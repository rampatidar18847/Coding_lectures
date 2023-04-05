#include <bits/stdc++.h>
using namespace std;

int getmin(int arr[])
{
    int mini = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        mini = min(arr[i], mini);
    }
    return mini;
}

int getmax(int arr[])
{
    int maxi = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "max value is : " << getmax(arr) << endl;

    cout << "min value is : " << getmin(arr) << endl;
}
