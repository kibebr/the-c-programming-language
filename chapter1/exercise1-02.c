/*

  EXERCISE DESCRIPTION:

  Exercise 1-02: Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.

 */
 
#include <stdio.h>

int main(void){
  printf("Hello, World!\c");
}

/* OUTPUT:

   exercise1-01.c:10:24: warning: unknown escape sequence '\c'
   [-Wunknown-escape-sequence]
   printf("Hello, World!\c");
   ^~
   1 warning generated.

/*
