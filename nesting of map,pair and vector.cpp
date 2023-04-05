#include <bits\stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        int c;
        cin >> x >> y >> c;
        for (int j = 0; j < c; j++)
        {
            int v;
            cin >> v;
            m[{x, y}].push_back(v);
        }
    }

    for (auto &p : m)
    {
        cout << p.first.first << " " << p.first.second;
        auto vec = p.second;
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i];
        }
    }
}