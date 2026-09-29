#include <iostream>

float ubahSuhu(float derajatC) {
    return (derajatC * 9.0f / 5.0f) + 32.0f;
}

int main() {
    float suhuCelsius;
    std::cout << "Nilai Celsius: ";
    if (!(std::cin >> suhuCelsius)) return 1;
    const float suhuFahrenheit = ubahSuhu(suhuCelsius);
    std::cout << suhuCelsius << " Celsius adalah "
              << suhuFahrenheit << " Fahrenheit\n";
    return 0;
}
