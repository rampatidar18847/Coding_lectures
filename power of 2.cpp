#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i <= 30; i++)
    {
        ans = pow(2, i);
        if (ans == n)
        {
            cout << "true";
        }
      
   }

   cout << "false";
}

   