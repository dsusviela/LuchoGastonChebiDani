/*
 * C.h
 */

#ifndef INCLUDE_C_H_
#define INCLUDE_C_H_

#include "A.h"
#include "B.h"

class A;
class B;

class C {
private:
  A *a;
  B *b;
public:
  void who();
};




#endif /* INCLUDE_C_H_ */
