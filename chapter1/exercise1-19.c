/*
  
  Exercise 1-19: Write a function reverse(s) that reverses the character string s. Use it to   write a program that reverses its input a line at a time.

*/

#include <stdio.h>
#include <string.h>

#define WORD_LIMIT 256

void reverse(char[], int);

int main(void)
{
	int currchar = 0;
	
	char currstring[WORD_LIMIT];
	int currstringlen = 0;
	
	while( ( currchar = getchar() ) != EOF){
		if(currchar != '\n'){
			currstring[currstringlen] = currchar;
			++currstringlen;
		}
		else{ // if there is a newline
			reverse(currstring, currstringlen);
			
			while(currstringlen != 0){ // resets string
				currstring[currstringlen] = '\0';
				--currstringlen;
			}

			continue;
		}
	}
		
	return 0;
}

void reverse(char s[], int slen){
	while(slen != -1){
		putchar(s[slen]);
		--slen;
	}
	
	putchar('\n');
}
