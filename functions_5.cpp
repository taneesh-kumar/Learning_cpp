#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 2) {
        std::cout << num << " is neither prime nor composite." << std::endl;
    } else {
        if (isPrime(num)) {
            std::cout << num << " is PRIME." << std::endl;
        } else {
            std::cout << num << " is NOT PRIME." << std::endl;
        }
    }

    return 0;
}
