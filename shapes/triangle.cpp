#include "triangle.h"
#include "polygon.h"

Triangle::Triangle() : p(0, 0), width(100), height(200) {}

Triangle::Triangle(Point2D p, double width, double height) throw() {
    this->p = p;
    this->width = width;
    this->height = height;
    int x;
    int *ptr = new int;
    if (width < 0 || height < 0) {
        throw BadCoord();
    }
}

double Triangle::area() {
    return 0.5 * width * height;
}
