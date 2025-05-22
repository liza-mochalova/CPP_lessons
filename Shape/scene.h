#ifndef SCENE_H
#define SCENE_H

#include <iostream>
#include "shape.h"
#include "IMoveable.h"

using std::cout;
using std::endl;

const int MAX_SCENE_SIZE = 100;
class Scene:public IMoveable
{
	private:
		Shape** obj;
		int size;
		
	public:
		Scene()	: size(0) 
		{
			obj = new Shape*[MAX_SCENE_SIZE];
		}
		
		bool add(Shape* s)
		{
			if (size < MAX_SCENE_SIZE)
			{
				obj[size++] = s;
				return true;
			}
			else
				return false;
		}
		
		void clear()
		{
			for(int i = 0; i < size; i++)
				delete obj[i];
			size = 0;
		}
		
		virtual void draw()
		{
			cout << "**********  Draw Scene **********" << endl;
			for(int i = 0; i < size; i++)
				obj[i]->draw();
				
			cout << "*********************************" << endl;
		}
        void moveBy(int dx,int dy){
            for (int i=0;i<size;i++){
                IMoveable* s=dynamic_cast<IMoveable*>(obj[i]);
                if (s!=NULL) s->moveBy(dx,dy);
            }
        }
        void moveTo(int x,int y){
            for (int i=0;i<size;i++){
                IMoveable* s=dynamic_cast<IMoveable*>(obj[i]);
                if (s!=NULL) s->moveBy(x,y);
            }
        }
		
		
		virtual ~Scene()
		{
			cout << "~Scene()" << endl;
			clear();
			delete[] obj;
		}
		
	
	
};

#endif
