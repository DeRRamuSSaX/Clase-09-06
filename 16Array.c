//Escribir un programa que reciba un argumento de tipo string y busque en un array conocido en tiempo de compilacion si el string esta en el array. Si esta el programa devuelve el ındice del elemento y de lo contrario devuelve -1.

#include <stdio.h>

int main(int argc, char *argv[]) {
  char *pibes[5] = {"Alex", "Tehuel", "Pedro", "Soto", "Kevin"};
  int a = 0;
  int b = 0;
  while (a < 5) {
    while (argv[1][b] != 0) {
      if (argv[1][b] == pibes[a][b]) {
      }else {
        break;
    }
    b++;
    printf("%d ", b);
    return 0;
    }
    printf("\n");
    a++;
  }
  printf("-1\n");
  return 0;
}

// ESTA MEDIO ROTO, NO USAR...
