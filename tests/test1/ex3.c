#include <stdio.h>

int main() {
  char c1, c2, c3, c4;

  printf("This program will ask you to enter 4 characters to get their numeric code.\n");
  printf("Enter the first character: ");
  scanf("%c", &c1);
  printf("Enter the second character: ");
  scanf(" %c", &c2);
  printf("Enter the third character: ");
  scanf(" %c", &c3);
  printf("Enter the fourth character: ");
  scanf(" %c", &c4);


  printf("Char: %c\tCode: %d\n", c1, (int)c1);
  printf("Char: %c\tCode: %d\n", c2, (int)c2);
  printf("Char: %c\tCode: %d\n", c3, (int)c3);
  printf("Char: %c\tCode: %d\n", c4, (int)c4);

  return 0;
}