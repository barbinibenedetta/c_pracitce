#include <stdio.h>

int days(int m);

int main() {
  int month;
  printf("Type a number between 1 and 12 to get the number of days in the corresponding month: ");
  scanf("%d", &month);

  while(month >= 1 && month <= 12) {
    int numOfDays = days(month);
    printf("The month number %d has %d days", month, numOfDays);
    printf("Type a number between 1 and 12 to get the number of days in the corresponding month: ");
    scanf("%d", &month);
  }

  printf("Invalid month number. Exiting the program.\n");

  return 0;
}

int days(int m) {
  int num;

  switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      num = 31;
      break;
    case 2:
      num = 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      num = 30;
      break;

    default:
      num = -1;
      break;
  }

  return num;
}