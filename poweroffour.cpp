#include <iostream>
using namespace std;

bool isPowerOffour(int n) {
    if (n <= 0) return false;
    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

int main() {
    int n = 16;
    cout << (isPowerOfTwo(n) ? "True" : "False") << endl;
    return 0;
}
