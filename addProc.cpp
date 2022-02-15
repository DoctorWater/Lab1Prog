#include "lab.h"
namespace add{
    void addP(int *a, int *b){
        *a+=*b;
    }
    void addL(int &a, int &b){
        a+=b;
    }
}
