#include "circle.h"
#include "math.h"

Circle::Circle() : p(0, 0), radius(100) {}

Circle::Circle(Point2D p, double radius) {
    this->p = p;
    this->radius = radius;
}

double Circle::area() {
    return M_PI * radius * radius;
}
