#include <bits/stdc++.h>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum = pagesum + arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = 0;
            pagesum = arr[i];
        }
    }
    return true;
}

int bookallocation(int arr[], int n, int m)
{
    int s = 0;                                      // code to find e;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;                                  // code to find e (end part through sum) .....code over.



    int ans = -1;                                 // code to get ans;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        
    }

    return ans;
}

int main()
{
    int a[] = {10, 20, 30, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int m;
    cout << "Enter no. of students : ";
    cin >> m;

    int result1 = bookallocation(a, n, m);

    cout << "Book is allocated to : " << result1 << endl;
}