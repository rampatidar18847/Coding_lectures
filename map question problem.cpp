#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < (2 * n) - 2; i += 2)
    {
        m[s[i]]++;
        auto it = m.find('a' + (s[i + 1] - 'A'));

        if (it != m.end())
        {
            if (m['a' + (s[i + 1] - 'A')] > 1)
            {
                m['a' + (s[i + 1] - 'A')]--;
            }
            else
            {
                m.erase('a' + (s[i + 1] - 'A'));
            }
        }
        else
        {
            count++;
        }
    }
    cout << count;
}