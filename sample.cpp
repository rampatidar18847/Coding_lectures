#include <iostream>
#include <string>
#include <vector>

int anagram(const std::string& s) {
    int n = s.length();
    if (n % 2 != 0) {
        return -1; // If the length of the string is odd, it's not possible to split into two equal substrings.
    }

    int changes = 0;
    int mid = n / 2;
    std::vector<int> count(26, 0);

    // Count the frequency of characters in the first half of the string.
    for (int i = 0; i < mid; i++) {
        count[s[i] - 'a']++;
    }

    // Count the frequency of characters in the second half of the string and check for anagrams.
    for (int i = mid; i < n; i++) {
        if (count[s[i] - 'a'] > 0) {
            count[s[i] - 'a']--;
        } else {
            changes++; // Increment changes if the character is not found in the first half.
        }
    }

    return changes;
}

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::string s;
        std::cin >> s;

        int result = anagram(s);
        std::cout << result << std::endl;
    }

    return 0;
}
