#pragma once

namespace lab {
    void addP(int *a, int *b);

    void addL(int &a, int &b);

    void add();

    void roundP(float *a);

    void roundL(float &a);

    void round();


    struct ComplexNumber {
    public:
        float realPart=0;
        float imaginaryPart=0;

        ComplexNumber(float realPart, float imaginaryPart) {
            this->realPart = realPart;
            this->imaginaryPart = imaginaryPart;
        }

        ComplexNumber() {

        }
    };

    void complexP(ComplexNumber *a);

    void complexL(ComplexNumber &a);

    void complex();
}