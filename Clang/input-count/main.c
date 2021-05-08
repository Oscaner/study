#include <stdio.h>

int main() {

  int input = 0;
  int count[10];

  for (int x = 0; x < sizeof(count) / sizeof(count[0]); x ++) {
    count[x] = 0;
  }

  printf("Please input number that range 0 and %lu (include), and end of -1: ", sizeof(count) / sizeof(count[0]) - 1);

  do {
    scanf("%d", &input);
    if (input >= 0 && input < sizeof(count) / sizeof(count[0])) {
      count[input] ++;
    }
  } while (input != -1);

  for (int x = 0; x < sizeof(count) / sizeof(count[0]); x ++) {
    printf("%d: %d %s.\n", x, count[x], count[x] > 1 ? "times" : "time");
  }

  return 0;
}
