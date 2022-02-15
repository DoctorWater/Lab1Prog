#include "lab.h"

namespace lab {
    void addP(int *a, int *b) {
        *a += *b;
    }

    void addL(int &a, int &b) {
        a += b;
    }

}
