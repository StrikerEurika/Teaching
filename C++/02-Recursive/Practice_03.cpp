#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + countDigits(n / 10);
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int count = countDigits(abs(n));
    cout << "Number of digits: " << count << endl;

    return 0;
}