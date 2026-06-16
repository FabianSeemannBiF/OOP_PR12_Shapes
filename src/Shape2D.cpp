//
// Created by fabus on 6/16/26.
//
#include "../includes/Shape2D.h"

#include <iostream>

Shape2D::Shape2D(const Color color, const Point position) : color(color), position(position) {}

Color Shape2D::getColor() const {
    return this->color;
}

Point Shape2D::getPosition() const {
    return this->position;
}

void Shape2D::setColor(const Color c) {
    this->color = c;
}
