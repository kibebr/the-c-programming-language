/*

  EXERCISE DESCRIPTION:
  Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b,
  and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.

*/

#include <stdio.h>

int main(void){
  int currchar;

  while(( currchar = getchar()) != EOF)
    if(currchar == '\t'){
      putchar('\\');
      putchar('t');
    }
    else if(currchar == '\b'){
      putchar('\\');
      putchar('b');
    }
    else if(currchar == '\\'){
      putchar('\\');
      putchar('\\');
    }
    else
      putchar(currchar);
}
