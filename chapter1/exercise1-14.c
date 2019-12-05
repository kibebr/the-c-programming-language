/*

  Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input.

*/

#include <stdio.h>

#define ASCII_CHARACTER_MAX 122

int main(void){
  
  int characters[ASCII_CHARACTER_MAX], input;
  for(int init = 0; init < ASCII_CHARACTER_MAX; ++init)
    characters[init] = 0;
    
  while(( input = getchar() ) != EOF)
    if(input == ' ')
      continue;
    else
      ++characters[input];
  

  for(int character = 0; character < ASCII_CHARACTER_MAX; ++character)
    if(characters[character] == 0)
      continue;
    else{
      printf("%c ", character);
      for(int timesUsed = 0; timesUsed < characters[character]; ++timesUsed)
	printf("*");
      printf("\n");
    }
  
}
