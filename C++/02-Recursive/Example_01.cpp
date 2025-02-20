# include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    long long result = factorial(n);
    cout << "Factorial: " << result << endl;

    return 0;
}


// long long variable is typically -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807