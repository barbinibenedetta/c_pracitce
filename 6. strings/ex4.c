#include <stdio.h>
#include <string.h>

void invertString(char string[]);

int main() {
  char myString[50];

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  invertString(myString);
  printf(myString);

  return 0;
}

void invertString(char string[]) {
  char tempCopy[50];
  strcpy(tempCopy, string);
  int length = strlen(string);

  for(int i = 0; i < length; i++) {
    string[i] = tempCopy[length - 1 - i];
  }
}