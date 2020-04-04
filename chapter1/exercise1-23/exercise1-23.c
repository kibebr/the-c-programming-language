/*
	Exercise 1-23: Write a program that remove all commments from a C program.
*/

#include <stdio.h>
#include <stdbool.h>

FILE *openTextFile();

int main(void){

	FILE* file = openTextFile();

	int currchar, nOfSlashes;
	currchar = nOfSlashes = 0;

	bool insideComment, insideQuotes;
	insideComment = insideQuotes = false;

	while(( currchar = getc(file) ) != EOF){

		if(currchar == '/'){
			++nOfSlashes;

			if(nOfSlashes == 2 && !insideQuotes){
				insideComment = true;
				continue;
			}
			putchar(currchar);
		}
		else{
			if(currchar == '\n'){
				insideComment = false; // true
			}
			
			if(currchar == '"'){
				insideQuotes = !insideQuotes; // true
			}

			if(insideComment && !insideQuotes){
				continue;
			}
			else{
				putchar(currchar);
			}

			nOfSlashes = 0;
		}
	}

	printf("%i\n", insideQuotes);
	fclose(file);
	return 0;

}


FILE* openTextFile(void){

	FILE *fptr = fopen("sample.txt", "r");

	if(!fptr){
		printf("%s\n", "sample.txt could not be loaded.");
		return NULL;
	}
	else{
		return fptr;
	}

}

