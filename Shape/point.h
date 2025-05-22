#ifndef POINT_H
#define POINT_H

#include "shape.h"
#include "IMoveable.h"
#include <iostream>

using std::cout;
using std::endl;

class Point : public Shape, public IMoveable {
protected:
    int _x, _y;

public:
    Point(int x = 0, int y = 0, const char* color = DEFAULT_COLOR) 
        : Shape(color), _x(x), _y(y) {}
    
    int x() const { return _x; }
    int y() const { return _y; }
    
    Point* x(int x) { _x = x; return this; }
    Point* y(int y) { _y = y; return this; }
    
    void draw() const override{
        cout << "Point. (" << x() << ", " << y() << ") " << color() << endl;
    }
    void moveBy(int dx, int dy) override {_x+=dx;_y+=dy;}
    void moveTo(int x,int y) override {_x=x;_y=y;}
    
};

#endif