#include <iostream>
#include <cmath>

int calculatePrimeFactorsSum(int n) {
    int sum = 0;

    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            int temp = i;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            n /= i;
        }
    }

    if (n > 2) {
        int temp = n;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    return sum;
}

bool isBostonNumber(int n) {
    int primeFactorsSum = calculatePrimeFactorsSum(n);
    int digitsSum = 0;

    int temp = n;
    while (temp > 0) {
        digitsSum += temp % 10;
        temp /= 10;
    }

    return (primeFactorsSum == digitsSum);
}

void printBostonNumbers(int start, int end) {
    std::cout << "Boston numbers between " << start << " and " << end << ":" << std::endl;

    for (int i = start; i <= end; i++) {
        if (isBostonNumber(i)) {
            std::cout << i << std::endl;
        }
    }
}

int main() {
    int start, end;

    std::cout << "Enter the starting number: ";
    std::cin >> start;

    std::cout << "Enter the ending number: ";
    std::cin >> end;

    printBostonNumbers(start, end);

    return 0;
}
