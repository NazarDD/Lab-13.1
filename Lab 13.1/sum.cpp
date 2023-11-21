#include <cmath>
#include "dod.h"
#include "var.h"
#include "sum.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    do {
       
        dod();
        s += a;
         n++;
    } while (fabs(a) > eps);
}