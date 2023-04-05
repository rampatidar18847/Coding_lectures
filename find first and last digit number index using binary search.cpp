#include <bits/stdc++.h>
using namespace std;
int firstbinarysearch(int arr[], int top, int bottom, int key)
{
    int ans;
    while (top <= bottom)
    {
        int mid = top + (bottom - top) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            bottom = mid - 1;
        }
        else if (arr[mid] < key)
        {
            top = mid + 1;
        }
        else if (arr[mid] > key)
        {
            bottom = mid - 1;
        }
        
    }

    return ans;
}

int lastbinarysearch(int arr[], int top, int bottom, int key)
{
    int ans;
    int mid = top + (bottom - top) / 2;
    while (top <= bottom)
    {
        mid = top + (bottom - top) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            top = mid + 1;
        }
        else if (arr[mid] < key)
        {
            top = mid + 1;
        }
        else if (arr[mid] > key)
        {
            bottom = mid - 1;
        }
        
    }

    return ans;
}

int main()
{
    int a[] = {1, 2, 3, 3, 3, 3, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int element;

    int result1 = firstbinarysearch(a, 0, n - 1, 7);
    int result2 = lastbinarysearch(a, 0, n - 1, 7);

    cout << "first 3 found at index " << result1 << endl;

    cout << "last 3 found at index " << result2 << endl;

    cout << "Occurence of 3 in array : " << result2 - result1 + 1;
}
