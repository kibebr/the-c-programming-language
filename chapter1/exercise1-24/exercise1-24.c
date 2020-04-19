#include <stdio.h>
#include <stdbool.h>

FILE* openTextFile(void);

int main(void){
	FILE *file = openTextFile();

	bool insideQuotes = false;
	int currchar;
	int numParentheses, numBrackets, numBraces;
	currchar = numParentheses = numBrackets = numBraces = 0;


	while( (currchar = getc(file)) != EOF ){

		if(currchar == '(' || currchar == ')'){
			++numParentheses;
		}
		else if(currchar == '[' || currchar == ']'){
			++numBrackets;
		}
		else if(currchar == '{' || currchar == '}'){
			++numBraces;
		}

	}

	if(numParentheses%2 != 0){
		printf("%s\n", "Parentheses ARE NOT BALANCED!");
	}
	if(numBrackets%2 != 0){
		printf("%s\n", "Brackets ARE NOT BALANCED!");
	}
	if(numBraces%2 != 0){
		printf("%s\n", "Braces ARE NOT BALANCED!");
	}


	printf("\n");
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