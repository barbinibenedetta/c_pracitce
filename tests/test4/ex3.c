#include <stdio.h>

int isPalindrome(int arr[], int length);

int main() {
  int length;
  
  printf("This program checks if an array of integer is a palindrome'\n");
  printf("Enter the length of the array you want to check: ");
  scanf("%d", &length);

  int arr[length];
  
  for(int i = 0; i < length; i++) {
    printf("Element number %d: ", i + 1);
    scanf(" %d", &arr[i]);
  }

  if(isPalindrome(arr, length)) {
    printf("The array is a palindrome.");
  } else {
    printf("The array is NOT a palindrome.");
  }

  return 0;
}

int isPalindrome(int arr[], int length) {
  for(int i = 0; i < length; i++) {
    if(arr[i] != arr[length - 1 - i]) {
      return 0;
    }
  }

  return 1;
}