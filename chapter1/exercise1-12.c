/*

  EXERCISE DESCRIPTION:
  Exercise 1-12: Write a program that prints its input one word per line.

*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
  bool new_line = false;
  int currchar;
  
  while( ( currchar = getchar() ) != EOF){
    if(currchar == ' ' || currchar == '\t' || currchar == '\n'){
      if(!new_line){
	putchar('\n');
	new_line = true;
      }
    }
    else{
      putchar(currchar);
      new_line = false;
    }	
  }
    
  return 0;
}
