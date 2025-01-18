#include <stdio.h>

int main() {
  // names of the 2 files
  char original[50];
  char copy[50];

  // user selects the names of the files 
  printf("This program will copy a selected file.\n");
  printf("Please enter the name of the file to copy: ");
  scanf("%49s", original);
  printf("Please enter the name you want to give to the copy: ");
  scanf("%49s", copy);
  
  // opening original in read mode, opening copy in write mode
  FILE *oPtr = fopen(original, "r");
  FILE *cPtr = fopen(copy, "w");

  // checking if the files were successfully opened
  if (oPtr == NULL) {
    printf("Error. It was not possible to open the %s file.\n", original);
    return 1;
  } else if (cPtr == NULL) {
    printf("Error. It was not possible to open the %s file.\n", copy);
    return 1;
  } else {
    while(!feof(oPtr)) {
      char s[512]; // this string will contain 1 line of the file
      fgets(s, 512, oPtr); // reads the string from the original
      fputs(s, cPtr); // copies the string into the copy
    }
  }

  fclose(oPtr);
  fclose(cPtr);

  return 0;
}