//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{

    if (s.size() == 0 or s.size() == 1)
        return true;
    string str("");
    for (int i = 0; i < s.size(); i++)
    {
        // using isalnum() function, to check,
        // if s[i] is alphanumeric or not.
        // if s[i] is alphanumeric, the push that character into str
        if (isalnum(s[i]))
        {
            // tolower() is used to convert upper case characters to lower case characters
            str.push_back(tolower(s[i]));
        }
        // if s[i] is not alphanumeric the simply skip it,
        // because we don't need non-alphanumeric characters
        else
            continue;
    }

    // using two pointer,
    // check, whether str is palindrome or not
    // if yes, retur true, else return false
    int i = 0, j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

    int main()
    {

        string s = "nooN";

        if (isPalindrome( s))
        {
            cout << "ture";
        }else
        {
            cout << "false";
        }
    }
