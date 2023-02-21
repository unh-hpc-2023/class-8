
#include "linear_algebra.h"

#include <assert.h>

// ----------------------------------------------------------------------
// main
//
// test the vector_add() function

int main(int argc, char** argv)
{
  {
    double x[3] = {1., 2., 3.};
    double y[3] = {2., 3., 4.};
    double z[3];

    vector_add(x, y, z, 3);
    assert(z[0] == 3. && z[1] == 5. && z[2] == 7.);
  }

  {
    double x[4] = {1., 2., 3., 4.};
    double y[4] = {2., 3., 4., 5.};
    double z[4];
    vector_add(x, y, z, 4);
    assert(z[0] == 3. && z[1] == 5. && z[2] == 7. && z[3] == 9.);
  }

  return 0;
}
