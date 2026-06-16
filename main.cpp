#include <iostream>

#include "includes/Canvas.h"
#include "includes/Circle.h"
#include "includes/Rectangle.h"

int main() {
    Canvas canvas;

    canvas.addShape(new Circle(Color::Red, Point(10, 20), 5));
    canvas.addShape(new Circle(Color::Blue, Point(0, 5), 12));

    canvas += new Rectangle(Color::Green, Point(2, 2), 10, 5);
    canvas += new Rectangle(Color::Yellow, Point(-5, 10), 4, 7);

    canvas.printShapes();

    std::cout << "Change Color of Shape: " << std::endl;
    canvas.changeColorOfShape(Color::Green, 1);
    canvas.printShapes();

    std::cout << "Exception handling: " << std::endl;
    try {
        canvas.changeColorOfShape(Color::Yellow, 10);
    } catch (std::out_of_range &e) {
        std::cout << "Exception out of Range: " << e.what() << std::endl;
    } catch (...) {
        std::cout << "Unknown Error!" << std::endl;
    }

    return 0;
}
