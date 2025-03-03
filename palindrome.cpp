#include <iostream>
using namespace std;

bool isAlphanumeric(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

bool isPalindrome(string s) {
int left = 0, right = s.length() - 1;
while (left < right) {
       while (left < right && !isAlphanumeric(tolower(s[left]))) {
            left++;
        }
        while (left < right && !isAlphanumeric(tolower(s[right]))) {
            right--;
        }

        // Compare characters
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main() {
    string input;
    cout << "Enter a phrase: ";
    getline(cin, input); // Read entire input including spaces

    if (isPalindrome(input)) {
        cout << "The phrase is a palindrome." << endl;
    } else {
        cout << "The phrase is not a palindrome." << endl;
    }

    return 0;
}
