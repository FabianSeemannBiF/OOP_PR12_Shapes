//
// Created by fabus on 6/16/26.
//

#ifndef OOP_PR12_2DSHAPES_CANVAS_H
#define OOP_PR12_2DSHAPES_CANVAS_H
#include <vector>

#include "Shape2D.h"

class Canvas {
public:
    Canvas();
    ~Canvas();

    void addShape(Shape2D* shape);
    void printShapes() const;
    void changeColorOfShape(Color color, int index);
    Canvas& operator+=(Shape2D* shape);

private:
    std::vector<Shape2D*> shapes;
};

#endif //OOP_PR12_2DSHAPES_CANVAS_H
