#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    if (!(cin >> num)) return 0;

    if (num <= 1) {
        cout << "NOT PRIME";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "PRIME";
    else
        cout << "NOT PRIME";

    return 0;
}