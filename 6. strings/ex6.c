#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char s1[], int n);
void decrypt(char s1[], int n);

int main() {
  char myString[50], myString2[50];
  int myN;

  printf("Type a string: ");
  fgets(myString, 50, stdin);
  if(myString[strlen(myString) - 1] == '\n') {
    myString[strlen(myString) - 1] = 0;
  }

  printf("Type an integer to encrypt your string: ");
  scanf("%d", &myN);
  while (getchar() != '\n');

  encrypt(myString, myN);
  printf("This is your encrypted string: %s\n", myString);

  printf("Type a string: ");
  fgets(myString2, 50, stdin);
  if(myString2[strlen(myString2) - 1] == '\n') {
    myString2[strlen(myString2) - 1] = 0;
  }

  printf("Type an integer to decrypt your string: ");
  scanf("%d", &myN);

  decrypt(myString2, myN);
  printf("This is your decrypted string: %s", myString2);

  return 0;
}

void encrypt(char s1[], int n) {
  int length = strlen(s1);

  for(int i = 0; i < length; i++) {
    if(s1[i] < 'a' || s1[i] > 'z') {continue;}
    int newValue = (int)s1[i] + n;
    if(newValue < 97) {
      newValue = 122 - (97 - newValue);
    } else if (newValue > 122) {
      newValue = 97 + (newValue - 122) - 1;
    }
    s1[i] = (char)newValue;
  }
}

void decrypt(char s1[], int n) {
  int length = strlen(s1);

  for(int i = 0; i < length; i++) {
    if(s1[i] < 'a' || s1[i] > 'z') {continue;}
    int newValue = (int)s1[i] - n;
    if(newValue < 97) {
      newValue = 122 - (97 - newValue) + 1;
    } else if (newValue > 122) {
      newValue = 97 + (newValue - 122) - 1;
    }
    s1[i] = (char)newValue;
  }
}