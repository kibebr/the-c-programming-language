// TODO

#include <stdio.h>

#define TAB 4

int main(void){
	int currchar = 0;
	int charcount, blankcount = 0;

	while( ( currchar = getchar() ) != EOF){
		
		if(currchar == '\n'){
			charcount = 0;
			putchar('\n');
		}
	}
	
	return 0;
}

/*
  column: 1 2 3 4 5 6 7 8 9 10
  input : * * * * h e l * * w 
  output:    <tab>hel<tab>*w  
*/
