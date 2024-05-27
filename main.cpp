#include "graphics.h"
#include <iostream>
#include <Windows.h>

void showMenu() {
    std::cout << "1. ���������� �������\n";
    std::cout << "2. ������ ����� ��������\n";
    std::cout << "3. ������ ����\n";
    std::cout << "4. ���������� �������\n";
    std::cout << "5. �����\n";
}

int main() {
    SetConsoleOutputCP(1251);
    Square square(0, 0, 5, "red");
    int choice;
    double dx, dy, factor, angle;
    std::string color;

    do {
        showMenu();
        std::cout << "������ ����� 䳿: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "������ dx and dy: ";
            std::cin >> dx >> dy;
            square.move(dx, dy);
            break;
        case 2:
            std::cout << "������ ����� �����: ";
            std::cin >> factor;
            square.resize(factor);
            break;
        case 3:
            std::cout << "������ ����: ";
            std::cin >> color;
            square.setColor(color);
            break;
        case 4:
            square.draw();
            break;
        case 5:
            std::cout << "�����...\n";
            break;
        default:
            std::cout << "������������ ���. ��������� �� ���\n";
            break;
        }
    } while (choice != 6);

    return 0;
}
