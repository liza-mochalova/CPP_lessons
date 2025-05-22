#include <iostream>
#include "shape.h"
#include "point.h"
#include "scene.h"

int main(){
    Scene* pScene = new Scene();
    pScene->add(new Point(10,20,"white"));
    pScene->moveBy(1,1);
    delete pScene;
    return 0;
}