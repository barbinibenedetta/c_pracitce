#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
  };

void printDate(struct Date d);

int main() {
  struct Date myDate;

  printf("Enter a date, in integer numbers.\n");
  printf("Enter a day (1-31): ");
  scanf("%d", &myDate.day);
  printf("Enter a month (1-12): ");
  scanf("%d", &myDate.month);
  printf("Enter a year: ");
  scanf("%d", &myDate.year);

  printDate(myDate);

  return 0;
}

void printDate(struct Date d) {
  printf("%d", d.day);
  switch (d.month)
  {
  case 1:
    printf(" January ");
    break;
  case 2:
    printf(" February ");
    break;
  case 3:
    printf(" March ");
    break;
  case 4:
    printf(" April ");
    break;
  case 5:
    printf(" May ");
    break;
  case 6:
    printf(" June ");
    break;
  case 7:
    printf(" July ");
    break;
  case 8:
    printf(" August ");
    break;
  case 9:
    printf(" September ");
    break;
  case 10:
    printf(" October ");
    break;
  case 11:
    printf(" November ");
    break;
  case 12:
    printf(" December ");
    break;
  
  default:
    break;
  };
  
  if (d.year <= 25) {
    printf("20%d", d.year);
  } else if (d.year > 25 && d.year < 100) {
    printf("19%d", d.year);
  } else {
    printf("%d", d.year);
  }
}