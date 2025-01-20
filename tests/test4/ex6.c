#include <stdio.h>

void points(int r, int c, int arr[][c], int k);

int main() {
  int r, c, k;

  printf("This program calculates the points gained by different football teams.\n");
  printf("You will be asked to fill in with the points each team has gained during the day'\n");
  printf("If they won the match enter 3 point, if they lost, enter 0, if they tied, enter 1.\n");
  printf("How many teams played? ");
  scanf("%d", &r);
  printf("How many days did the tournament last? ");
  scanf("%d", &c);

  int m[r][c];

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      printf("Team %d Day %d:\t", i + 1, j + 1);
      scanf("%d", &m[i][j]);
    }
  }

  printf("Now enter the number of a day, to learn the points each team had at that point: ");
  scanf("%d", &k);

  points(r, c, m, k);

  return 0;
}

void points(int r, int c, int arr[][c], int k) {
  int points[k];
  for(int i = 0; i < r; i++) {
    int counter = 0;
    for(int j = 0; j < k; j++) {
      counter += arr[i][j];
    }
    points[i] = counter;
  }

  for(int i = 0; i < r; i++) {
    printf("Team %d Points %d\n", i + 1, points[i]);
  }
}