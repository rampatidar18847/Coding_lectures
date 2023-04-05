#include <bits/stdc++.h>
using namespace std;

string maximumFrequency(string s);

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {

        string s;
        getline(cin, s);

        cout << maximumFrequency(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

string maximumFrequency(string str)
{
    vector<string> vec;
    map<string, int> mp;
    int n = str.length();
    string ans = "";
    cout << "ans :"<<ans;
    // to store one one word in map
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            vec.push_back(ans);
            ans = "";
        }
        else
        {
            ans = ans + str[i];
        }
    }
    vec.push_back(ans); // to store last word
    for (int i = 0; i < vec.size(); i++)
    {
        mp[vec[i]]++;
    }

    int max = -1;
    ans = "";
    for (int i = 0; i < vec.size(); i++)
    {
        if (max < mp[vec[i]])
        {
            max = mp[vec[i]];
            ans = vec[i];
        }
    }

    return ans + ' ' + to_string(max);
}
