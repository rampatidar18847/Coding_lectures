#include <bits/stdc++.h>
using namespace std;
int binarysearch(int array[], int top, int bottom, int x)
{
    while (top <= bottom)
    {
        int mid = (top + bottom) / 2;

        if (x == array[mid])
        {
            return mid;
        }
        if (x > array[mid])
        {
            top = mid + 1;
        }
        if (x < array[mid])
        {
            bottom = mid - 1;
        }
    }
    return -1;
}

int getpivot(int arr[], int top, int bottom)
{
    int ans;
    int mid = top + (bottom - top) / 2;
    while (top < bottom)
    {

        if (arr[mid] >= arr[0])
        {
            top = mid + 1;
        }
        else
        {
            bottom = mid;
        }

        mid = top + (bottom - top) / 2;
    }

    return top;
}

int getrotatedsort(int arr[], int top, int bottom, int key)
{
    int pivot = getpivot(arr, top, bottom);

    if (key >= arr[pivot] && key <= arr[bottom])
    {
        return binarysearch(arr, pivot, bottom, key);
    }
    else
    {
        return binarysearch(arr, top, pivot-1, key);
    }
}

int main()
{
    int a[] = {7,9, 1, 3,5};
    int n = sizeof(a) / sizeof(a[0]);
    int element;
   
    int result1 = getpivot(a, 0, n);

    int result2 = getrotatedsort(a, 0, n, 9);
    cout << "Pivot element found at index " << result1 << endl;
    cout << "Rotatedsort element found at index " << result2 << endl;
}
