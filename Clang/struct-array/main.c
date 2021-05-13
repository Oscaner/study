#include <stdio.h>

struct {
  int amount;
  char *name;
} coins [] = {
  {1, "penny"},
  {5, "nickel"},
  {10, "dime"},
  {25, "quarter"},
  {50, "half-dollar"}
};

int main() {

  int k = 10;

  for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) {
    if (k == coins[i].amount) {
      printf("%s\n", coins[i].name);
    }
  }

  return -1;
}
