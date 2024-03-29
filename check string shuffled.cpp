// C++ program to check if string
// str1 is substring of str2 or not.
#include <bits/stdc++.h>
using namespace std;

// Function two check string A
// is shuffled substring of B
// or not
bool isShuffledSubstring(string A, string B)
{
    int n = A.length();
    int m = B.length();

    // Return false if length of
    // string A is greater than
    // length of string B
    if (n > m)
    {
        return false;
    }
    else
    {

        // Sort string A
        sort(A.begin(), A.end());

        // Traverse string B
        for (int i = 0; i < m; i++)
        {

            // Return false if (i+n-1 >= m)
            // doesn't satisfy
            if (i + n - 1 >= m)
                return false;

            // Initialise the new string
            string str = "";

            // Copy the characters of
            // string B in str till
            // length n
            for (int j = 0; j < n; j++)
                {
                    str.push_back(B[i + j]);
                }

            // Sort the string str
            sort(str.begin(), str.end());

            // Return true if sorted
            // string of "str" & sorted
            // string of "A" are equal
            if (str == A)
            {
                return true;
            }
        }
    }
}

// Driver Code
int main()
{
    // Input str1 and str2
    string str1 = "onetwofour";
    string str2 = "hellofourtwooneworld";

    // Function return true if
    // str1 is shuffled substring
    // of str2
    bool a = isShuffledSubstring(str1, str2);

    // If str1 is substring of str2
    // print "YES" else print "NO"
    if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}
