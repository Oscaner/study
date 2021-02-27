#include <stdio.h>

int main() {

  int num = 0;

  printf("Please input a non-negative integer: ");
  scanf("%d", &num);

  int factorial = 1;

  for (int tmp = num; tmp > 0; tmp--) {
    factorial *= tmp;
  }

  printf("The number %d factorial is %d.\n", num, factorial);

  return 0;
}
