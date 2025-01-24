#include <stdio.h>

int main() {
  int length;

  printf("You will be asked to type a sequence of integers.\n");
  printf("Enter the length of the sequence: ");
  scanf("%d", &length);

  int arr[length];
  
  for(int i = 0; i < length; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < length; i++) {
    for(int j = i + 1; j < length; j++) {
      if(arr[i] == arr[j]) {
        printf("%d ", i);
        break;
      }
    }
  }

  return 0;
}