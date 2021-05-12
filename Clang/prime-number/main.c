#include <stdio.h>

int main() {

  const int length = 25;

  int prime[length] = {0};

  for (int i = 0; i < length; i++) {
    prime[i] = 1;
  }

  for (int i = 1; i < length; i++) {
    if (prime[i] == 0) {
      continue;
    }
    // Number = i + 1
    // Number * (>1) is Prime.
    for (int j = 2; (i + 1) * j <= length; j++) {
      prime[(i + 1) * j - 1] = 0;
    }
  }

  {
    for (int i = 0; i < length; i++) {
      printf("%d\t", i + 1);
    }
    printf("\n");
    for (int i = 0; i < length; i++) {
      printf("%d\t", prime[i]);
    }
    printf("\n");
  }

  return 0;
}
