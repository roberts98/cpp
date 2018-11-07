#include "square.h"

Square::Square() : Rectangle(Point2D(), 100, 100) {}

Square::Square(Point2D p, double side) : Rectangle(p, side, side) {}
