//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {5, 3, 6}, v2 = {1, 2, 4, 7, 8}, v3(8);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    sort(v3.begin(), v3.end());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
}
