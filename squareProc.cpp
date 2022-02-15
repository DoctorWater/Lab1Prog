#include <iostream>
#include "lab.h"

using namespace std;
namespace lab{
    void squareP(Square *square, Vector *vector){
        square->a.x+=vector->x;
        square->a.y+=vector->y;
        square->b.x+=vector->x;
        square->b.y+=vector->y;
        square->c.x+=vector->x;
        square->c.y+=vector->y;
        square->d.x+=vector->x;
        square->d.y+=vector->y;
    }
    void squareL(Square &square, Vector &vector){
        square.a.x+=vector.x;
        square.a.y+=vector.y;
        square.b.x+=vector.x;
        square.b.y+=vector.y;
        square.c.x+=vector.x;
        square.c.y+=vector.y;
        square.d.x+=vector.x;
        square.d.y+=vector.y;
    }
}
