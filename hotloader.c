
#include "hotloader.h"
#include <stdio.h>

int add(int x, int y) {
  return x + y;
}


int sub(int x, int y) {
  return x - y;
}


void run() {
  printf("%d\n", add(4, -2));
}

