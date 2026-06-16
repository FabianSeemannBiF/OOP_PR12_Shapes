//
// Created by fabus on 6/16/26.
//

#ifndef OOP_PR12_2DSHAPES_SHAPE2D_H
#define OOP_PR12_2DSHAPES_SHAPE2D_H
#include <string>

#include "../includes/Point.h"

class Shape2D {
public:
    Shape2D(Color color, Point position);
    virtual ~Shape2D() = default;

    Color getColor() const;
    void setColor(Color c);
    Point getPosition() const;
    virtual void print() = 0;
    virtual std::string getName() = 0;

protected:
    Color color;
    Point position;
};

#endif //OOP_PR12_2DSHAPES_SHAPE2D_H
