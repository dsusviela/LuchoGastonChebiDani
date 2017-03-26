/*
 * A.h
 */

#ifndef INCLUDE_A_H_
#define INCLUDE_A_H_

#include <iostream>

#include "B.h"
#include "C.h"

class B;
class C;

class A {
private:
  B *b;
  C *c;
public:
  void who();
};



#endif /* INCLUDE_A_H_ */
