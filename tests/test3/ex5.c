#include <stdio.h>

int calcDay(int d, int m, int y);
int calcM(int m, int y);
int calcS(int y);
int isLeapYear(int y);

int main() {
  int d, m, y;

  printf("This program will calculate the day of the week starting from the date.\n");
  printf("Enter the number of the day (1-31): ");
  scanf(" %d", &d);
  printf("Enter the number of the month (1-12): ");
  scanf(" %d", &m);
  printf("Enter the number of the year (yyyy): ");
  scanf(" %d", &y);

  switch (calcDay(d, m, y)) {
  case 0:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Sunday.", d, m, y);
    break;
  case 1:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Monday.", d, m, y);
    break;
  case 2:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Tuesday.", d, m, y);
    break;
  case 3:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Wednesday.", d, m, y);
    break;
  case 4:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Thursday.", d, m, y);
    break;
  case 5:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Friday.", d, m, y);
    break;
  case 6:
    printf("The day %d/%d/%d (dd/mm/yyyy) was a Saturday.", d, m, y);
    break;
  }

  return 0;
}

int calcDay(int d, int m, int y) {
  int day = ((d % 7) + calcM(m, y) + calcS(y) + (y % 100 % 28) + (y % 100 % 28) / 4) % 7;
}

int calcM(int m, int y) {
  // if it's a leap year, give to jan and feb the correct value
  if (isLeapYear(y)) {
    switch (m) {
    case 1:
      return 5;
    case 2:
      return 1;
    }
  }

  // if it's not, continue with the normal values
  switch (m) {
  case 1:
  case 10:
    return 6;

  case 2:
  case 3:
  case 11:
    return 2;

  case 4:
  case 7:
    return 5;

  case 5:
    return 0;

  case 6:
    return 3;

  case 8:
    return 1;

  case 9:
  case 12:
    return 4;
  }
}

int calcS(int y) {
  // cc represent the first 2 digits of the year (that is the century)
  int cc = (y - y % 100) / 100;
  int remainder = cc % 4;
  switch (remainder) {
  case 0:
    return 0;
  case 1:
    return 5;
  case 2:
    return 3;
  case 3:
    return 1;
  }
}

int isLeapYear(int y) {
  // checks if it's divisible by 4 or by 400
  return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}