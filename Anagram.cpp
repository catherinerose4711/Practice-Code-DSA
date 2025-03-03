#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false; // Different lengths can't be anagrams

    int freq1[26] = {0}; // Frequency array for string s
    int freq2[26] = {0}; // Frequency array for string t

    // Count frequency of characters in both strings
    for (int i = 0; i < s.length(); i++) {
        freq1[s[i] - 'a']++; // Count for s
        freq2[t[i] - 'a']++; // Count for t
    }

    // Compare both frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) return false;
    }

    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
