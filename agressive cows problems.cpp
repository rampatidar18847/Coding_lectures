#include <bits/stdc++.h>
using namespace std;

bool ispossible(int a[], int n, int m, int mid)
{
    int cowscount = 1;
    int lastpos = a[0];

    for (int i = 0; i < n; i++)
    {

        if (a[i] - lastpos >= mid)
        {
            cowscount++;

            if (cowscount == m)
            {
                return true;
            }

            lastpos = a[i];
        }
    }

    return false;
}

int aggressivecows(int a[], int n, int m)
{
    sort(a, a + n);
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(a[i], maxi);
    }

    int e = maxi;

    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(a, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int a[] = {4, 2, 1, 3, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int m;
    cin >> m;

    int result = aggressivecows(a, n, m);

    cout << "largest distance between cows : " << result;
}