// 辗转相除法
// 1. 如果 b 等于 0，计算结束，a 就是最大公约数
// 2. 否则，计算 a 除以 b 的余数，让 a 等于 b，而 b 等于那个余数
// 3. 回到第一步
//
// a  b   t=a%b
// 12 18  12
// 18 12  6
// 12 6   0
// 6  0

#include <stdio.h>

int main() {

  int a = 0;
  int b = 0;
  int t = 0;

  printf("Please input an non-negative integer: ");
  scanf("%d", &a);
  int orgA = a;

  printf("Please input another non-negative integer: ");
  scanf("%d", &b);
  int orgB = b;

  while (b != 0) {
    t = a % b;
    a = b;
    b = t;
  }

  printf("The greatest common divisor of %d and %d is %d\n", orgA, orgB, a);

  return 0;
}
