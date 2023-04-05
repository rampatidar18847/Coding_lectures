#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bits;
    int i;
    int ans=0;
    while (n!=0)
    {
        int r = n%10;
        if (r == 1)
        {
            ans = r * pow(2, i) + ans;
        }
        
        n = n / 10;
        i++;

    }


    cout << ans;
}