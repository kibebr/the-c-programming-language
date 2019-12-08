/*

  Exercise 1-17: Write a program to print all input lines that are longer than 80 characters.

*/

#include <stdio.h>

#define MIN_CHARACTERS 80

int main(void){
	
	int currchar, // current character being read
		currlinelen = 0; // length of the line being read

	int characters[MIN_CHARACTERS];

	while( ( currchar = getchar() ) != EOF){

		if(currlinelen >= MIN_CHARACTERS){ // if the minimum length is achieved, print everything until next line ('\n')

			for(int thischar = 0; thischar < MIN_CHARACTERS; ++thischar) // prints everything stored in buffer
				putchar(characters[thischar]);
			
			
			do{
				putchar(currchar);
			}while( ( currchar = getchar() ) != '\n'); // prints all next characters until a new line
			
			currlinelen = 0;
			
		}
		else{
			
			if(currchar == '\n'){ // if there's a new line and we the min length hasn't been achieved, reset everything
				currlinelen = 0;
				continue;
			}
			
			characters[currlinelen] = currchar; // stores current character in the array
			++currlinelen;
			
		}
	}
	return 0;
}
