/*	
	Exercise 1-21: Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks
	to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would
	suffice to reach the stop, which should be given preference?
*/

// . -> blanks
// - -> tabs

#include <stdio.h>
#define TAB 8

int main(void){

	int currchar, nspaces, nchars;
	currchar = nspaces = nchars = 0;

	while( (currchar = getchar()) != EOF){

		if(currchar == '.'){
			++nspaces;
		}

		while(nspaces >= TAB - nchars){
			putchar('\t');
			nspaces -= TAB;
		}

		while(nspaces > 0){
			putchar(' ');
			--nspaces;
		}

		nchars = 0;

		if(currchar != '\t'){
			++nchars;
		}

		putchar(currchar);
	}

	return 0;

}

/*
  column: 1 2 3 4 5 6 7 8 9 10
  input : * * * * h e l * * w 
  output:    <tab>hel<tab>*w  
*/