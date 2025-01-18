#include <stdio.h>

int main() {
  char filename[50];
  char string[50];

  printf("This program will find the number of occurrences of a string in a text file.\n");
  printf("Please enter the file name: ");
  scanf("%49s", filename);
  printf("Please enter the string: ");
  scanf("%49s", string);

  FILE *fPtr = fopen(filename, "r");

  if (fPtr == NULL) {
    printf("Error. It was not possible to open the %s file.\n", filename);
    return 1;
  } else {
    while(!feof(fPtr)) {
      char s[512]; // this string will contain 1 line of the file
      
    }
  }


  return 0;
}