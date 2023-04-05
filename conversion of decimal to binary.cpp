#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bits;
    int i;
    int reverse=0;
    while (n!=0)
    {
        int r = n % 2;
        reverse = r * pow(10, i) + reverse;
        n = n / 2;
        i++;

    }


    cout << reverse;
}