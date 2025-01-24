#include <stdio.h>
#include <math.h>

struct Punto {
  double x;
  double y;
};

int main() {
  int lung;
  double perimetro = 0;

  printf("Inserire il numero di vertici del poligono: ");
  scanf("%d", &lung);

  struct Punto arr[lung];

  printf("Inserire le coordinate dei punti.\n");
  for(int i = 0; i < lung; i++) {
    printf("Punto %d\n", i + 1);
    printf("x: ");
    scanf("%lf", &arr[i].x);
    printf("y: ");
    scanf("%lf", &arr[i].y);
  }

  for(int i = 0; i < lung - 1; i++) {
    perimetro += sqrt(pow((arr[i].x - arr[i + 1].x), 2) + pow((arr[i].y - arr[i + 1].y), 2));
  }
  perimetro += sqrt(pow((arr[lung - 1].x - arr[0].x), 2) + pow((arr[lung - 1].y - arr[0].y), 2));

  printf("Il perimetro del poligono misura: %lf", perimetro);

  return 0;
}