#include <iostream>
#include <algorithm>
using namespace std;

void counting_sort(int a[], int n, int pos)
{

    int b[10] = {0};
    int c[n];

    for (int i = 0; i < n; i++)
    {
        b[(a[i] / pos) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        b[i] += b[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        c[--b[(a[i] / pos) % 10]] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = c[i];
    }
}

void radix_sort(int a[], int n)
{
    int maxi = *max_element(a, a + n);

    for (int pos = 1; maxi / pos > 0; pos *= 10)
    {
        counting_sort(a, n, pos);
    }
}

int main()
{
    int a[] = {3, 1, 5, 7, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);

    radix_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
