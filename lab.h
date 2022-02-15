#pragma once

#include <iostream>

namespace lab {
    void addP(int *a, int *b);

    void addL(int &a, int &b);

    void add();

    void roundP(float *a);

    void roundL(float &a);

    void round();


    struct ComplexNumber {
    public:
        float realPart = 0;
        float imaginaryPart = 0;

        ComplexNumber(float realPart, float imaginaryPart) {
            this->realPart = realPart;
            this->imaginaryPart = imaginaryPart;
        }

        ComplexNumber() {}

        void toString(){
            std::cout<< this->realPart <<"+("<< this->imaginaryPart<<")";
        }
    };

    void complexP(ComplexNumber *a);

    void complexL(ComplexNumber &a);

    void complex();

    struct Dote {
    public:
        float x=0, y=0;
    };

    struct Square {
    public:
        Dote a, b, c, d;
        Square(float Ax, float Ay,float Bx, float By,float Cx, float Cy,float Dx, float Dy){
            this->a.x=Ax;
            this->a.y=Ay;
            this->b.x=Bx;
            this->b.y=By;
            this->c.x=Cx;
            this->c.y=Cy;
            this->d.x=Dx;
            this->d.y=Dy;
        }
        Square(){};
        void toString() {
            std::cout << "A(" << this->a.x << "," << this->a.y << ") B("
                      << this->b.x << "," << this->b.y << ") C(" << this->c.x << "," << this->c.y << ") D(" << this->d.x
                      << "," << this->d.y << ")" << std::endl;
        }
    };

    struct Vector {
    public:
        float x, y;
        Vector(float x, float y){
            this->x=x;
            this->y=y;
        }
        Vector(){};
        void toString(){
            std::cout<<"("<<this->x<<","<<this->y<<")"<<std::endl;
        }
    };

    void square();

    void squareP(Square *square, Vector *vector);

    void squareL(Square &square, Vector &vector);

    void demonstrate();
}