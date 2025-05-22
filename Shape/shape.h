#ifndef _SHAPE_H_
#define _SHAPE_H_

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

class Shape
{

	protected:
		string* _color;
		
	public:
		const static char* DEFAULT_COLOR;

        string color() const{
            return *_color;
        }

        Shape(string color ){
            _color=new string(color);
        }
        Shape(const char* color= DEFAULT_COLOR){
            _color=new string(color);
        }
        Shape(const Shape& s) {
            _color = new string(*s._color); 
        }
        
        Shape& operator=(const Shape& s) {
            if (this != &s) { 
                delete _color; 
                _color = new string(*s._color); 
            }
            return *this; 
        }
        virtual ~Shape(){
            delete _color;
        }
        virtual void draw() const = 0;
    
    };
#endif
