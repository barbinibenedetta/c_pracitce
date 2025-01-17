#include <stdio.h>
#include <string.h>

void savePart(char s1[], char s2[], int i, int j);

int main() {
  char myString[50], mySavedPart[50];
  int myI, myJ;

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  printf("Type 2 numbers that represent 2 indexes of the string, to save said part of the string: ");
  scanf("%d %d", &myI, &myJ);

  savePart(myString, mySavedPart, myI, myJ);
  printf(mySavedPart);

  return 0;
}

void savePart(char s1[], char s2[], int i, int j) {
  int index = 0;
  for(int k = i; k <= j; k++) {
    s2[index] = s1[k];
    index++;
  }
}