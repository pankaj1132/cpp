#include <iostream>

void calculateSumOfDigits(int number, int& sumEven, int& sumOdd) {
    int digit;
    int position = 1;

    while (number != 0) {
        digit = number % 10;

        if (position % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }

        number /= 10;
        position++;
    }
}

int main() {
    int number;
    int sumEven = 0;
    int sumOdd = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    calculateSumOfDigits(number, sumEven, sumOdd);

    std::cout << "Sum of digits at even places: " << sumEven << std::endl;
    std::cout << "Sum of digits at odd places: " << sumOdd << std::endl;

    return 0;
}
