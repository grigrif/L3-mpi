#include "add.h"
#include <stdio.h>
int main(void) {
  int x = 17;
  int y = 25;
  printf("%d + %d = %d\n", x, y, add(x, y));
  return 0;
}
