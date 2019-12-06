/*

  Exercise 1-17: Write a program to print all input lines that are longer than 80 characters.

*/
#include <stdio.h>

#define MAX_ARRAYCHARACTERS 1000
#define MIN_CHARACTERS 80

int main(void){
  
  int currchar,
      currcharlen = 0;

  char currline[MAX_ARRAYCHARACTERS];

  while( ( currchar = getchar() ) != EOF ){
    currline[currcharlen] = currchar;
    ++currcharlen;
    
    if(currchar == '\n'){
      if(currcharlen >= MIN_CHARACTERS){
	puts("LINE WITH 80+ CHARACTERS: ");
	for(int thischar = 0; thischar < currcharlen; ++thischar)
	  printf("%c", currline[thischar]);
      }
      currcharlen = 0;
    }
  }

  return 0;
  
}
  
