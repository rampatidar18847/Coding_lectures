#include <bits/stdc++.h>
using namespace std;

int fab(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // cout << ans;
        fab(a, n - 1);
        return pow(a, n);
    }
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << fab(a, b);
}
