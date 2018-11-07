#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point2d.h"
#include "polygon.h"

class Rectangle : public Polygon {
    private:
        Point2D p;
        double width, height;
    public:
        Rectangle();
        Rectangle(Point2D, double, double);
        double area();
};

#endif // RECTANGLE_H
