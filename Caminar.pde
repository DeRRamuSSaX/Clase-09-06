// IGNORAR ESTO, ESTA A MEDIO HACER...

size(400,400);
bool win = false;
//primero la grilla
int grilla[][] = new int[15][15];
//blanquear esta matriz
for (int i = 0; i < 15; i++) {
  for (int j = 0; j < 15; j++) {
    grilla[i][j] = 0;
  }
}
//la posicion del caminante
int x = 7;
int y = 7;
//k es el contador de paso
int k = 1;
grilla[x][y] = k;
//tirando un random para saber donde vamos
for (int i = 0; i < 100; i++) {
  int r = rand() % 4;
  if (r == 0 && grilla[x+1][y] == 0) { x++; k++; }
  if (r == 1 && grilla[x][y+1] == 0) { y++; k++; }
  if (r == 2 && grilla[x-1][y] == 0) { x--; k++; }
  if (r == 3 && grilla[x][y-1] == 0) { y--; k++; }
  if (x > 14 || x < 0 || y > 14 || y < 0) {
    win = true;
    break;
  }
  grilla[x][y] = k;
}
//imprimimos la grilla a ver que hizo el caminante
for (int i = 0; i < 15; i++) {
  for (int j = 0; j < 15; j++) {
    printf("%02d ", grilla[i][j]);
  }
  printf("\n");
}
background(255);
int rx = 0;
int ry = 0;
return 0;
}
