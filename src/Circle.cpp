//
// Created by fabus on 6/16/26.
//
#include "../includes/Circle.h"

#include <iostream>

Circle::Circle(const Color color, const Point position, const int radius) : Shape2D(color, position), radius(radius) {}

int Circle::getRadius() const {
    return this->radius;
}

void Circle::print() {
    std::cout << "Form: " << getName() << " - Position: " << getPosition().getX() << "/" << getPosition().getY() << " Radius: " << getRadius() << std::endl;
}

std::string Circle::getName() {
    return "Circle";
}
