/*
  
  Exercise 1-16: Revise the main routine of the longest-line program so it will correctly print the length of the
  arbitrarily long input lines, and as much as possible of the text.
  
*/


#include <stdio.h>

#define MAXLINE 1000

int getLine(char[]);
void copy(char[], char[]);

main(){
  int len, max;
  len = max = 0;

  char currline[MAXLINE];
  char longestline[MAXLINE];

  while( ( len = getLine(currline) ) > 0)
    if(len > max){
      max = len;
      copy(longestline, currline);
    }

  if(max > 0)
    printf("LONGEST LINE: %s LENGTH: %i\n", longestline, max);
    
 
  return 0;
}

int getLine(char linecopy[]){
  int character, i;

  for(i=0; i<MAXLINE-1 && ( character = getchar() ) != EOF && (character != '\n'); ++i)
    linecopy[i] = character;

  if(character == '\n'){
    linecopy[i] = character;
    ++i;
  }

  linecopy[i] = '\0';
  
  return i;
}

void copy(char to[], char from[]){
  for(int i = 0; (to[i] = from[i]) != '\0'; ++i)
    ;
}
