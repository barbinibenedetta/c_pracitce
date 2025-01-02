#include <stdio.h>

void printMonth(int m);

int main() {
  int month;
  printf("Please enter an integer between 1 and 12: ");
  scanf("%d", &month);

  printf("The number you have entered is the month:\n");
  printMonth(month);

  return 0;
}

void printMonth(int m) {
  if (m < 1 || m > 12) {
    printf("Alert: you have not entered a number between 1 and 12.");
    return;
  } else {
    switch (m) {
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;

    default:
      break;
    }
  }
}