#include "lab.h"

namespace lab {
    void roundP(float *a) {
        int b =static_cast<int>(*a);
        *a -= b;
    }

    void roundL(float &a) {
        int b =static_cast<int>(a);
        a -= b;
    }
}

