#include <stdio.h>
#define LIMIT 1024

int get_line();

int main(void){
	get_line("test");
}

int get_line(){
	int currchar = 0;
	char string[LIMIT+1];

	/*
		for(int i=0; i<LIMIT-1 && (currchar=getchar()) != '\n' && currchar != EOF; ++i){
			string[i] = currchar;
		}

		the exercise asks us to do the same without the && or || operators
	*/

	for(int i=0; i<LIMIT-1; i++){
		if((currchar = getchar()) != '\n'){
			if(currchar == EOF){
				break;
			}
		}
		else{
			break;
		}

		string[i] = currchar;
	}


	printf("%s\n", string);
}