/*

  Exercise 1-20: Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns. Should n be a variable or  a symbolic parameter?

*/


#include <stdio.h>

#define TAB 3

int main(void){
	int currchar = 0;
	int count = 0;

	
	while( ( currchar = getchar() ) != EOF){
		
		if(currchar == '\n'){ // if this char is a newline
			count = 0;
			putchar('\n');
		}

		if(currchar == '\t'){ // if this char is a tab
			int spaces = ( TAB - ( count % TAB ));

			while(spaces != 0){
				putchar(' ');
				--spaces;
			}
			
		}
		else{ // if this char isn't a tab
			putchar(currchar);
			++count;
		}
		
	}
	
	return 0;
}
