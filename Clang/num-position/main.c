#include <stdio.h>

int main() {

  int position = 0;
  int num = 0;

  printf("请输入一个整数：");
  scanf("%d", &num);

  int temp = num;

  do {
    temp /= 10;
    position ++;
  } while (temp > 0);

  printf("%d 是 %d 位整数。\n", num, position);

  return 0;
}
