#include <stdio.h>

double calcAverage(double arr[], int size);

int main() {
  int n;

  printf("You will be asked to type a serie of double numbers, separated by a comma,\nlike this: a, b, c, d, ecc...\n");
  printf("How many numbers will you type? ");
  scanf("%d", &n);

  double myArr[n];

  printf("Now type your numbers:\n");
  for (int i = 0; i < n; i++) {
    printf("Number %d: ", i);
    scanf("%lf", &myArr[i]);
  }

  printf("The average of the numbers you entered is: %lf", calcAverage(myArr, n));

  return 0;
}

double calcAverage(double arr[], int size) {
  double sum = 0;

  for(int i = 0; i < size; i++) {
    sum += arr[i];
  }

  double average = sum / size;
  return average;
}