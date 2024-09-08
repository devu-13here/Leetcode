#include <iostream>
#include <cmath>
using namespace std;

bool ArmstrongNumber(int n) {
    int originalno = n;
    int count = 0;
    int temp = n;

    // Counting the number of digits
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int sumofpower = 0;
    temp = n; // Reset temp to the original number

    // Calculating the sum of digits raised to the power of count
    while (temp != 0) {
        int digit = temp % 10;
        sumofpower += pow(digit, count);
        temp /= 10;
    }

    // Return true if the sum is equal to the original number
    return (sumofpower == originalno);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (ArmstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
