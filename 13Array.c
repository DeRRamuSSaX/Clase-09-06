//Escribir un programa que reciba un argumento entero e imprima el mes del ano correspondiente o un error si el argumento es menor a 1 o mayor a 12.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  char *meses[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
  };
  if (n < 1 || n > 12) {
    printf("Son 12 meses, hacelo devuelta\n");
  }
  printf("%s\n", meses[n]);
  return 0;
}
