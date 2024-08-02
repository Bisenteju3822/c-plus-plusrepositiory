#include <iostream>

bool prime(int v) {
    if (v <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i <= v / 2; ++i) {
        if (v % i == 0) return false; // If divisible, not prime
    }
    return true; // Otherwise, it's a prime number
}

int main() {
    int n1;
    std::cout << "Enter a positive integer: ";
    std::cin >> n1;

    if (prime(n1)) {
        std::cout << n1 << " is a prime number." << std::endl;
    } else {
        std::cout << n1<< " is not a prime number." << std::endl;
    }

    return 0;
}
