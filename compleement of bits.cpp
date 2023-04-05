#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mask = 0;
    int m = n;

    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = mask << 1 | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans;
}

   