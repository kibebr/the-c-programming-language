/*
  
  EXERCISE DESCRIPTION:
  Exercise 1-6: Verify that the expression getchar() != 0 is 0 or 1.

*/

#include <stdio.h>

int main(void){
  int c;
  
  while(c = (getchar() != EOF))
    printf("%i", c);
  
   
  return 0;
}
