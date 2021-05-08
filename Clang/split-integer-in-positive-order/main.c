// 10000
// 13425 / 10000 -> 1    (√)
// 13425 % 10000 -> 3425

// 10000 / 10    -> 1000
// 3425  / 1000  -> 3    (√)
// 3425  % 1000  -> 425

// 1000  / 10    -> 100
// 425   / 100   -> 4    (√)
// 425   % 100   -> 25

// 100   / 10    -> 10
// 25    / 10    -> 2    (√)
// 25    % 10    -> 5

// 10    / 10    -> 1
// 5     / 1     -> 5    (√)
// 5     % 1     -> 0

// 1     / 10    -> 0

#include <stdio.h>

int main() {

  int mask = 1, num = 0;

  printf("Please input an non-negative integer: ");
  scanf("%d", &num);

  int org = num;

  while (num > 10) {
    mask *= 10;
    num /= 10;
  }

  do {
    printf("%d%s", (org / mask), (mask >= 10 ? " " : "\n"));
    org %= mask;
    mask /= 10;
  } while (mask > 0);

  return 0;
}
