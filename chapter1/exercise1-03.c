#include <stdio.h>

/*

  EXERCISE DESCRIPTION:
  Exercise 1-3: Modify the temperature conversion program to print a heading above the table.

*/

int main(void){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table
  upper = 300; // upper limit
  step = 20; // step size

  fahr = lower;
  printf("FAHR CELSIUS\n"); // <- simply print the table before printing the values
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  
}
