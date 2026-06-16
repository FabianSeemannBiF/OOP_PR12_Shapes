//
// Created by fabus on 6/16/26.
//
#include "../includes/Rectangle.h"

#include <iostream>

Rectangle::Rectangle(const Color color, const Point position, const int length, const int width) : Shape2D(color, position), length(length), width(width)  {}

int Rectangle::getPerimeter() const {
    return 2 * (this->length + this->width);
}

void Rectangle::print() {
    std::cout << "Form: " << getName() << " - Position: " << getPosition().getX() << "/" << getPosition().getY() << " Perimeter: " << getPerimeter() << std::endl;
}

std::string Rectangle::getName() {
    return "Rectangle";
}

int Rectangle::getLength() const {
    return this->length;
}

int Rectangle::getWidth() const {
    return this->width;
}
