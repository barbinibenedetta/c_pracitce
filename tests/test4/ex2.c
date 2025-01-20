#include <stdio.h>

int main() {
  int n;

  printf("This program is based on the Sieve of Eratosthenes and will find prime numbers.\n");
  printf("Enter an integer to find all the prime numbers smaller than it: ");
  scanf("%d", &n);

  int arr[n + 1];
  
  //initializing array, initially all elements are set to 1
  for(int i = 0; i <= n; i++) {
    arr[i] = 1;
  }
  //elements that are not prime numbers will be set to 0
  arr[0] = 0;
  arr[1] = 0;

  for(int i = 2; i <= n; i++) {
    if (arr[i] == 0) {continue;}
    
    for(int j = i + 1; j <= n; j++) {
      if(arr[j] == 0) {continue;}
      arr[j] = (j % i == 0) ? 0 : 1;
    }
  }

  for(int i = 0; i <= n + 1; i++) {
    if (arr[i] != 0) {
      printf("%d, ", i);
    }
  }

  return 0;
}