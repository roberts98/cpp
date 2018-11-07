#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point2d.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "polygon.h"
#include "badcoord.h"

class Triangle : public Polygon {
    private:
        Point2D p;
        double width, height;
    public:
        Triangle();
        Triangle(Point2D, double, double) throw();
        double area();
};

#endif // TRIANGLE_H
