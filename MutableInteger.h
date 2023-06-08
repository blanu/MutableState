#ifndef _MUTABLEINTEGER_H_
#define _MUTABLEINTEGER_H_

#include <Arduino.h>
#include "num.hpp"

class MutableInteger
{
  public:
    MutableInteger(Num state) : state(state) {}
    MutableInteger(int i) : state(Num(i)) {}

    Num get();
    void set(Num newState);

    int getInt();
    void setInt(int newState);

  private:
    Num state;
};

#endif
