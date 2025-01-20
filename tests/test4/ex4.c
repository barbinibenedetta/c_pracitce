#include <stdio.h>
#include <math.h>

void convert(int n, int b, int arr[], int length);

int main() {
  int b, n;

  printf("This program is a base converter.\n");
  printf("Enter an integer number you want to convert: ");
  scanf("%d", &n);
  printf("Enter the base you want to convert it to (2-9): ");
  scanf("%d", &b);

  int length = floor(log(n) / log(b)) + 1;
  int arr[length];

  convert(n, b, arr, length);
  printf("The number %d in base %d is: ", n, b);
  for(int i = 0; i < length; i++) {
    printf("%d", arr[i]);
  }

  return 0;
}

void convert(int n, int b, int arr[], int length) {
  int remainder = n;
  if (n == 0) {
    arr[0] = 0;
    return;
  }

  for(int i = 0; i < length; i++) {

    arr[length - 1 - i] = remainder % b;
    remainder /= b;
  }

  return;
}