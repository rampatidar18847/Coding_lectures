#include <bits\stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> v)
{
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i].first << " , " << v[i].second << endl;
    }
    
}

    int main()
{

    

    vector<pair<int, int>> v;

    for (int i = 0; i < 4; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    printvec(v);
}