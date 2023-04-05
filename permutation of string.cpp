#include <bits/stdc++.h>
using namespace std;

void permute(string str)
{
    if (str.size() == 0)
    {
        cout << " " << endl;
        return;
    }

    sort(str.begin(), str.end());
    do
    {
        cout << str << " ";
    } while (next_permutation(str.begin(), str.end()));
}

// Driver code
int main()
{
    string str = "ABC";
    permute(str);
    return 0;
}
