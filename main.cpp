#include "graphics.h"
#include <iostream>
#include <Windows.h>

void showMenu() {
    std::cout << "1. Перемістити квадрат\n";
    std::cout << "2. Змінити розмір квадрата\n";
    std::cout << "3. Змінити колір\n";
    std::cout << "4. Намалювати квадрат\n";
    std::cout << "5. Вийти\n";
}

int main() {
    SetConsoleOutputCP(1251);
    Square square(0, 0, 5, "red");
    int choice;
    double dx, dy, factor, angle;
    std::string color;

    do {
        showMenu();
        std::cout << "Введіть номер дії: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введіть dx and dy: ";
            std::cin >> dx >> dy;
            square.move(dx, dy);
            break;
        case 2:
            std::cout << "Введіть новий розмір: ";
            std::cin >> factor;
            square.resize(factor);
            break;
        case 3:
            std::cout << "Введіть колір: ";
            std::cin >> color;
            square.setColor(color);
            break;
        case 4:
            square.draw();
            break;
        case 5:
            std::cout << "Вихід...\n";
            break;
        default:
            std::cout << "Неправильний ввід. Спробуйте ще раз\n";
            break;
        }
    } while (choice != 6);

    return 0;
}
