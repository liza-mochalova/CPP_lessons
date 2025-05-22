#ifndef __CIRCLE_H__
#define __CIRCLE_H__
#include "shape.h"
#include <iostream>

using std::cout;
using std::endl;
class Circle : public Shape {
    protected:
		int x;
		int y;
		int r;
	public:
		Circle(int _x = 0, int _y = 0, int _r = 0,
			const char* _color = DEFAULT_COLOR)
			: Shape(_color), x(_x), y(_y), r(_r)
		{
			cout << "Circle(int,int,int,char*)" << endl;
		}
		
		int getX() const {return x;}
		int getY() const {return y;}
		int getR() const {return r;}

		int setX(int _x) { x = _x;}
		int setY(int _y) { y = _y;}		
		int setR(int _r) { r = _r;}	
		
		void draw() const override
		{
			cout << "Circle. ("	<< getX() << ", " << getY() << ") "
				<< "R: " << getR() << " Color: " << endl;
		}	
		
		void scale(double factor)
		{
			r *= factor;
		}
		
		~Circle()
		{
			cout << "~Circle()" << endl;
		}		
    }; 
#endif