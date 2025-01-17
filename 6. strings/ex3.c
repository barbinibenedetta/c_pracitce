#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char string[]);

int main() {
  char myString[50];

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  toUpperCase(myString);
  printf(myString);

  return 0;
}

void toUpperCase(char string[]) {
  int length = strlen(string);

  for(int i = 0; i < length; i++) {
    string[i] = toupper(string[i]);
  }
}