#ifndef CIRCLE_H
#define CIRCLE_H
#include "point2d.h"
#include "polygon.h"


class Circle : public Polygon {
    private:
        Point2D p;
        double radius;
    public:
        Circle();
        Circle(Point2D, double);
        double area();
};

#endif // CIRCLE_H
