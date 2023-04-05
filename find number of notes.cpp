#include <bits/stdc++.h>
using namespace std;

int main()
{

    int amount;
    int n100 = 0, n50 = 0, n20 = 0, n1 = 0;
    cin >> amount;

    cout << endl;
    while (amount != 0)
    {
        if (amount >= 100)
        {
            n100++;
            amount = amount - 100;
        }
        else if (amount >= 50)
        {
            n50++;
            amount = amount - 50;
        }
        else if (amount >= 20)
        {
            n20++;
            amount = amount - 20;
        }
        else if (amount >= 1)
        {
            n1++;
            amount = amount - 1;
        }
    }
    cout << "100 notes required are = "<<n100 << endl;
    cout << "50 notes required are = " << n50 << endl;
    cout << "20 notes required are = " << n20 << endl;
    cout << "1 notes required are = " << n1 << endl;
    cout << endl;
}
