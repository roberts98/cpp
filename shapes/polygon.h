#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
    public:
        virtual double area() = 0;
        bool hasGreaterArea(Polygon& p) {
            return (this->area() > p.area());
        }
};

#endif // POLYGON_H
