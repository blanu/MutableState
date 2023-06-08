#include "MutableInteger.h"

Num MutableInteger::get()
{
  return state;
}

void MutableInteger::set(Num newState)
{
  state = newState;
}

int MutableInteger::getInt()
{
  int result;
  if (state.can_convert_to_int(&result))
  {
    return result;
  }
  else
  {
    return 0; // Not ideal, but what is the alternative?
  }
}

void MutableInteger::setInt(int newState)
{
  state = Num(newState);
}

