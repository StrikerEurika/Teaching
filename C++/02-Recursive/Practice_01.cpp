#include <iostream>
using namespace std;

int sumEvenNumbers(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + sumEvenNumbers(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: "; cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 0;
    }
    else if (n % 2 != 0) {
        n--; // subtract 1 if n is odd to get the next even number
    }

    int sum = sumEvenNumbers(n); // int / int = int
    double average = (double) sum / n;

    cout << "Summation: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}