#include <iostream>
#include <cmath>

bool isArmstrongNumber(int number) {
    int originalNumber = number;
    int digits = 0;
    int sum = 0;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, digits);
        originalNumber /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == number);
}

int main() {
    int number;

    
    std::cin >> number;

    if (isArmstrongNumber(number)) {
        std::cout << number << std::endl;
    } else {
        
    }

    return 0;
}
