#include <stdio.h>
#include <math.h>

int main() {
  long long code, num;
  int digits[13];

  printf("Type a 13 digits number to check if its a valid EAN code: ");
  scanf("%lld", &code);

  // This loop breaks the number into an array made by its digits
  num = code;
  for (int i = 12; i >= 0; i--) {
    digits[12 - i] = num / (long long)pow(10, i);
    num %= (long long)pow(10, i);
  }

  int lastDigit = digits[12];
  int n = 0, m = 0, value;

  // sum all the digits in an odd position, except the last one
  for(int i = 0; i < 11; i+=2) {
    n += digits[i];
  } 
  // sum all the digits in an even position
  for(int i = 1; i < 12; i+=2) {
    m += digits[i];
  }

  value = n + 3 * m;
  // the control digit is the smallest number you have to add to "value" in order to
  // obtain a multiple of 10
  int valueUnit = value % 10;
  int controlDigit = valueUnit == 0 ? valueUnit : 10 - valueUnit;

  // if the controlDigit is equal to the lastDigit, the number is a valid EAN code
  printf("The last digit is: %d\n", lastDigit);
  printf("The control digit is: %d\n", controlDigit);
  printf("If these 2 digits are the same, the number you entered is a valid EAN code.");

  return 0;
}