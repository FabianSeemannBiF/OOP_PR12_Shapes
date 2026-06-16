//
// Created by fabus on 6/16/26.
//

#ifndef OOP_PR12_2DSHAPES_POINT_H
#define OOP_PR12_2DSHAPES_POINT_H

enum Color {
    Red,
    Yellow,
    Green,
    Blue
};

class Point {
public:
    Point(int x, int y);
    ~Point() = default;

    int getX() const;
    int getY() const;
private:
    int x, y;
};

#endif //OOP_PR12_2DSHAPES_POINT_H
