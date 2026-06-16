//
// Created by fabus on 6/16/26.
//

#ifndef OOP_PR12_2DSHAPES_RECTANGLE_H
#define OOP_PR12_2DSHAPES_RECTANGLE_H
#include "../includes/Shape2D.h"

class Rectangle : public Shape2D {
public:
    Rectangle(Color color, Point position, int length, int width);
    ~Rectangle() override = default;

    int getPerimeter() const;

    void print() override;
    std::string getName() override;

    int getLength() const;
    int getWidth() const;

private:
    int length;
    int width;
};

#endif //OOP_PR12_2DSHAPES_RECTANGLE_H
