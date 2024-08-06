#include <iostream>

double convertCelsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    
    std::cin >> celsius;

    double fahrenheit = convertCelsiusToFahrenheit(celsius);

    std::cout  << fahrenheit << std::endl;

    return 0;
}
