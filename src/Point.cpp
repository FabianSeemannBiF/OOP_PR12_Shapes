//
// Created by fabus on 6/16/26.
//
#include "../includes/Point.h"

Point::Point(const int x, const int y) : x(x), y(y) {}

int Point::getX() const {
    return this->x;
}

int Point::getY() const {
    return this->y;
}
