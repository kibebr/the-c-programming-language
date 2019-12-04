/*

  EXERCISE DESCRIPTION:
  Exercise 1-13: Write a program to print a histogram of the lengths of words in its input, vertically or horizontally.

*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_WORDS 10

int main(void){
  
  int wordslen[MAX_WORDS];
  int currchar;

  for(int word = 0; word < MAX_WORDS; ++word){
    wordslen[word] = 0; // initializes current index
    
    while((currchar = getchar()) != EOF){
      if(currchar == ' ')
	break;
      else
	++wordslen[word];
    }

    // prints the histogram - VERTICALLY
    printf("%i\n", word);

    if(wordslen[word] == 0)
      printf("NO WORD.");
    else
      for(int letters = 0; letters < wordslen[word]; ++letters)
	printf("#");
        
    printf("\n");
  }
  
}
