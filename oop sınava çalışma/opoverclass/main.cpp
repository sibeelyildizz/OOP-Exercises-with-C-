#include <iostream>
#include "opOverClass.h"

using namespace std;

int main()
{

      opOverClass u(4,5);
      opOverClass v(2,3);
      u.print();
      v.print();
      u=u+v;
      u.print();

    return 0;
}
