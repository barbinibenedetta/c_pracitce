#include <stdio.h>
#include <string.h>

int countChar(char string[], char c);

int main() {
  char myString[50], myChar;

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  printf("Type a character: ");
  scanf("%c", &myChar);

  printf("The character %c appears in the string %s %d time(s).", myChar, myString, countChar(myString, myChar));

  return 0;
}

int countChar(char string[], char c) {
  int length = strlen(string);
  int count = 0;

  for(int i = 0; i < length; i++) {
    if(*(string + i) == c) {
      count++;
    }
  }

  return count;
}