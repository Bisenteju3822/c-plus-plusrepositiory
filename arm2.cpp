#include <iostream>
using namespace std;

int main() {
    int n1, oriNum, rem, res = 0;

    cout << "Enter a positive integer: ";
    cin >> n1;

    oriNum =n1;
        while (oriNum != 0) {
        // Calculate the remainder (last digit)
        rem = oriNum % 10;
        // Add the cube of the remainder to the result
        res += rem * rem * rem;
        // Remove the last digit from the original number
        oriNum /= 10;
    }

    if (rem == n1)
        cout << n1 << " is an Armstrong number.";
    else
        cout << n1 << " is not an Armstrong number.";

    return 0;
}