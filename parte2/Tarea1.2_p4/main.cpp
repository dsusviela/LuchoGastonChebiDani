/*
 * main.cpp
 */

#include "include/A.h"
#include "include/B.h"
#include "include/C.h"


int main() {

  A a;
  B b;
  C c;

  a.who();
  b.who();
  c.who();

  std::cout << "\nFinalizo con exito la ejecucion. \n";

  return 0;
}
