#include <iostream>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int reversedNum1 = reverseNumber(num1);
    int reversedNum2 = reverseNumber(num2);

    int sum = reversedNum1 + reversedNum2;

    std::cout << "Sum of reversed numbers: " << sum << std::endl;

    return 0;
}
