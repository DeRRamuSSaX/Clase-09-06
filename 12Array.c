//Escribir un programa que reciba un string como argumento y decida si la palabra es un palındromo o no.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *array = argv[1];
  int a = 0;
  while (argv[1][a] != 0) {
    a++;
  }
  for (int i = 0; i < a/2; i++) {
    if (argv[1][i] != argv[1][a-i-1]) {
      printf("No es Palindromo\n");
      return 1;
    }
  }
  printf("Es Palindromo\n");
  return 0;
}
