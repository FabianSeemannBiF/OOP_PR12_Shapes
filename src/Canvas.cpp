//
// Created by fabus on 6/16/26.
//
#include "../includes/Canvas.h"

#include <iostream>
#include <ostream>

Canvas::Canvas() {}

Canvas::~Canvas() {
    for (auto shape : this->shapes) {
        delete shape;
    }
    this->shapes.clear();
}

void Canvas::addShape(Shape2D *shape) {
    if (shape != nullptr) {
        this->shapes.push_back(shape);
    }
}

void Canvas::printShapes() const {
    std::cout << "Shapes:" << std::endl;
    for (const auto shape : this->shapes) {
        shape->print();
    }
    std::cout << "==============================" << std::endl;
}

void Canvas::changeColorOfShape(Color color, int index) {
    if (index >= this->shapes.size()) {
        throw std::invalid_argument("Index out of bounds");
    }
    this->shapes[index]->setColor(color);
}

Canvas& Canvas::operator+=(Shape2D *shape) {
    addShape(shape);
    return *this;
}
