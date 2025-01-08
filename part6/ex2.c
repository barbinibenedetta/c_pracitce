#include <stdio.h>
#include <string.h>

void countChars(char string[]);

int main() {
  char myString[50], myChar;

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  printf("The number of occurences of the letters in your string are:\n");
  countChars(myString);

  return 0;
}

void countChars(char string[]) {
  int length = strlen(string);

  for(int k = 97; k <= 122; k++) {
    //97 is the ascii code for 'a', 122 is the ascii code for 'z'
    int count = 0;
    char c = (char)k;

    for(int i = 0; i < length; i++) {
      if(*(string + i) == c) {
        count++;
      }
    }

    printf("Letter '%c: %d\n", c, count);
  }
}