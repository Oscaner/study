#include <stdio.h>

int sum(int begin, int end);

int main() {

  printf("%d", sum(1, 10));

  return 0;
}

int sum(int begin, int end) {
  int sum = 0;
  for (int i = begin; i <= end; i++) {
    sum += i;
  }
  return sum;
}
