#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int n = 21;
    cout << (isPowerOfThree(n) ? "True" : "False") << endl;
    return 0;
}
