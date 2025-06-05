//C++ Program to Display Fibonacci Series
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;
    int fib[n];
    fib[0] = 1;
    if (n > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;

    return 0;
}

