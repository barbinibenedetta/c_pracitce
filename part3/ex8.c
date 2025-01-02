#include <stdio.h>
#include <string.h>

int checkNum(int num);

int main() {
  int myNum;

  printf("Type an integer: ");
  scanf("%d", &myNum);

  int areAllDigitsSame = checkNum(myNum);
  printf("Are all the digits in the number the same? (true=1, false=0): %d", areAllDigitsSame);

  return 0;
}

int checkNum(int num) {
  char numberString[30];
  int result = 1;

  sprintf(numberString, "%d", num);
  char firstChar = numberString[0];

  for(int i = 1; i < strlen(numberString); i++) {
     if (numberString[i] == firstChar) {
      continue;
     } else {
      result = 0;
      break;
     }
  }

  return result;
}