#include <stdio.h>
#include <math.h>

int main() {
  int d1, d2, d3, ogNum, num;

  printf("You will be asked to type a 3 digit number, one digit at the time.\n");
  printf("The program will check if the number is an Armstrong number.\n");
  printf("Type the first digit: ");
  scanf("%d", &d1);
  printf("Type the second digit: ");
  scanf("%d", &d2);
  printf("Type the third digit: ");
  scanf("%d", &d3);

  ogNum = d1 * 100 + d2 * 10 + d3;
  num = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);
  int result = ogNum == num;

  printf("Is %d an armstrong number? (y=1; n=0); %d", ogNum, result);

  return 0;
}