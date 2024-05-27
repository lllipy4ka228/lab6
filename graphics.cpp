#include "graphics.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y, const std::string& color) : x(x), y(y), color(color) {}

void Point::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Point::setColor(const std::string& newColor) {
    color = newColor;
}

Square::Square(double x, double y, double side, const std::string& color)
    : Point(x, y, color), side(side) {}

void Square::resize(double factor) {
    side *= factor;
}

void Square::rotate(double angle) {
    std::cout << "Кут квадрата: " << angle << " degrees\n";
}

void Square::draw() const {
    int intSide = static_cast<int>(side);
    std::string colorPrefix = "\033[0m"; 
    if (color == "red" || "червоний") {
        colorPrefix = "\033[31m";
    }
    else if (color == "green" || "зелений") {
        colorPrefix = "\033[32m";
    }
    else if (color == "blue" || "синій") {
        colorPrefix = "\033[34m";
    }

    for (int i = 0; i < intSide; ++i) {
        for (int j = 0; j < intSide; ++j) {
            std::cout << colorPrefix << "* ";
        }
        std::cout << "\033[0m" << std::endl; 
    }
}
