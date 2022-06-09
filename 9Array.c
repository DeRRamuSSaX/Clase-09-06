//Escribir un programa similar al ejercicio 8 pero que invierta un array con los primeros 20 numeros pares.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int pares[20];
  int a = 40;
  int b = 0;
  while (a >= 0) {
    pares[b] = a;
    b++;
    a -= 2;
  }
  for (int i = 0; i <= 20; i++) {
    printf("%d ", pares[i]);
  }
  printf("\n");
  return 0;
}
