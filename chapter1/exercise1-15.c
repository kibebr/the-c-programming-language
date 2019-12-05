/*

  Exercise 1-15: Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

*/

#include <stdio.h>

float convertTo(char, float);

int main(void){
  float celsius = 32.5;
  float fah = 76.0;
  
  printf("CELSIUS: %6.1f TO FAH:\n%6.1f\n", celsius, convertTo('F', celsius));
  printf("FAH: %6.1f TO CELSIUS:\n%6.1f\n", fah, convertTo('C', fah));

  return 0;
}

float convertTo(char type, float degree){
  if(type == 'C')
    return ( (5.0/9.0)  * (degree-32.0) );
  else
    return ( ( degree * (9.0/5.0) ) + 32.0 );
}
