/*

  EXERCISE DESCRIPTION:
  Exercise 1-5: Modify the temperature conversion program to print the table in reverse order, 
  that is, from 300 degrees to 0.

  ORIGINAL SNIPPET:

  for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, ( (5.0/9.0) * (fahr-32) ) );

*/

#include <stdio.h>

int main(void){
  int fahr;

  for(fahr = 300; fahr >= 0; fahr -= 20)
    printf("%3d %6.1f\n", fahr, ( (5.0/9.0) * (fahr-32) ) );
  
}

// fahr is only being used inside the for scope, so it could be rewritten as such:

for(int fahr = 300; fahr >= 0; fahr -= 20)
  printf("%3d %6.1f\n", fahr, ( (5.0/9.0) * (fahr-32) ) );
