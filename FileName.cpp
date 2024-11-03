#include <iostream>

int main() {
    double x = 9.0;  // Задане значення x
    double numerator, denominator, y;

    // Обчислення чисельника: 1024 - 2 * x^2
    numerator = 1024 - 2 * x * x;

    // Обчислення знаменника: 3.2 * x^2 - 25
    denominator = 3.2 * x * x - 25;

    // Перев?рка на д?лення на нуль
    if (denominator != 0) {
        // Обчислення y
        y = numerator / denominator;
        std::cout << "Результат: " << y << std::endl;
    }
    else {
        std::cout << "Помилка: д?лення на нуль." << std::endl;
    }

    return 0;
}
