#include "MutableInteger.h"

MutableInteger state = MutableInteger(100);

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(9600);

  int result = state.getInt();
  Serial.write(result);

  state.set(200);
  int result2 = state.getInt();
  Serial.write(result2);
}

void loop()
{
  // put your main code here, to run repeatedly:

}
