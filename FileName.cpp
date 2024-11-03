#include <iostream>

int main() {
    double x = 9.0;  // ������ ���祭�� x
    double numerator, denominator, y;

    // ���᫥��� �ᥫ쭨��: 1024 - 2 * x^2
    numerator = 1024 - 2 * x * x;

    // ���᫥��� ����������: 3.2 * x^2 - 25
    denominator = 3.2 * x * x - 25;

    // ��ॢ?ઠ �� �?����� �� ���
    if (denominator != 0) {
        // ���᫥��� y
        y = numerator / denominator;
        std::cout << "�������: " << y << std::endl;
    }
    else {
        std::cout << "�������: �?����� �� ���." << std::endl;
    }

    return 0;
}
