#include <iostream>

float celsiusKeFahrenheit(float celsius) {
    return celsius * 1.8f + 32.0f;
}

int main() {
    float celsius;
    std::cout << "Nilai Celsius: ";
    if (!(std::cin >> celsius)) return 1;
    std::cout << celsius << " Celsius adalah "
              << celsiusKeFahrenheit(celsius) << " Fahrenheit\n";
    return 0;
}
