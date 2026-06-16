//
// Created by fabus on 6/16/26.
//

#ifndef OOP_PR12_2DSHAPES_CIRCLE_H
#define OOP_PR12_2DSHAPES_CIRCLE_H
#include "Shape2D.h"

class Circle : public Shape2D {
public:
    Circle(Color color, Point position, int radius);
    ~Circle() override = default;

    int getRadius() const;
    void print() override;
    std::string getName() override;
private:
    int radius;
};

#endif //OOP_PR12_2DSHAPES_CIRCLE_H
