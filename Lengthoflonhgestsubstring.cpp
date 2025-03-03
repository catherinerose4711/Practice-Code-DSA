#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1); // Stores last index of each character
    int left = 0, maxLength = 0;
    
    for (int right = 0; right < s.length(); right++) {
        if (lastIndex[s[right]] >= left) {
            left = lastIndex[s[right]] + 1; // Move left pointer
        }
        lastIndex[s[right]] = right; // Update last seen index
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Length of longest substring without duplicate characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
