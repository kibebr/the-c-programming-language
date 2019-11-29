/*

  EXERCISE DESCRIPTION:
  Exercise 01-8: Write a program to count blanks, tabs, and newlines.

*/


#include <stdio.h>

int main(void){
  int currCharacter;
  int blanks, tabs, newlines;
  blanks = tabs = newlines = 0;
  
  while((currCharacter = getchar()) != EOF)
    if(currCharacter == ' ')
      ++blanks;
    else if(currCharacter == '\t')
      ++tabs;
    else if(currCharacter == '\n')
      ++newlines;
  

  printf("BLANKS: %i\nTABS: %i\nNEWLINES: %i\n", blanks, tabs, newlines);
  return 0;
}
