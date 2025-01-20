#include <stdio.h>

int verifySystem(int m, int n, double a[][n], double b[], double x[]);

int main() {
  int m, n;

  printf("This program checks if an array of solutions verify a linear system of many equations and unknowns.\n");
  printf("For context, the equations are in the form ax + by + ... + cz = q\n");
  printf("Start by entering the number of equations: ");
  scanf("%d", &m);
  printf("Now enter the number of unkowns: ");
  scanf("%d", &n);

  double a[m][n], b[m], x[n];
  printf("Now you will enter the coefficients of the unknowns.\n");
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      printf("Coefficient %d-%d: ", i + 1, j + 1);
      scanf("%lf", &a[i][j]);
    }
  }

  printf("Now you will enter the constant terms 'q' of the equations.\n");
  for(int i = 0; i < m; i++) {
    printf("Term %d: ", i + 1);
    scanf("%lf", &b[i]);
  }

  printf("Finally, enter the solutions to verify.\n");
  for(int i = 0; i < n; i++) {
    printf("Solution %d: ", i + 1);
    scanf("%lf", &x[i]);
  }

  int result = verifySystem(m, n, a, b, x);
  if(result == 0) {
    printf("The solutions do NOT verify the system.");
  } else if (result == 1) {
    printf("The solutions verify the system!");
  }
  
  return 0;
}

int verifySystem(int m, int n, double a[][n], double b[], double x[]) {
  for(int i = 0; i < m; i++) {
    double value = 0.0;
    for(int j = 0; j < n; j++) {
      value += a[i][j] * x[j];
    }

    if(value != b[i]) {
      return 0;
    }
  }

  return 1;
}