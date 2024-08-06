#include <iostream>

int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    
    std::cin >> num1;

    std::cin >> num2;

    int lcm = calculateLCM(num1, num2);

    std::cout <<  lcm << std::endl;

    return 0;
}
