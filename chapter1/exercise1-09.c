/*

  EXERCISE DESCRIPTION:
  Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by
  a single blank.

*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
  int currchar;
  bool previousWasSpace = false;
  
  while(( currchar = getchar() ) != EOF){
    if(currchar == ' '){
      if(previousWasSpace)
	continue;
      else{
	putchar(' ');
	previousWasSpace = true;
      }
    }
    previousWasSpace = false;
    putchar(currchar);
  }
}
