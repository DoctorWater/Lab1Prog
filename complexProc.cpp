#include "lab.h"
namespace lab{
    void complexP(ComplexNumber *a){
        a->imaginaryPart=a->imaginaryPart*(-1);
    }
    void complexL(ComplexNumber &a){
        a.imaginaryPart=a.imaginaryPart*(-1);
    }
}