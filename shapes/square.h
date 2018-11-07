#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"
#include "point2d.h"


class Square : public Rectangle {
    public:
        Square();
        Square(Point2D, double);
};

#endif // SQUARE_H
