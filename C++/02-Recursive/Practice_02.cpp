#include <iostream>
using namespace std;

void displayHello(int n) {
    if (n > 0) {
        displayHello(n - 1);
        cout << "Hello " << n << endl;
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    displayHello(n);

    return 0;
}