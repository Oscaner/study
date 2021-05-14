#include <stdio.h>

const int numbers[] = {2, 4, 7, 11, 13, 16, 21, 24, 27, 32, 36, 40, 46};

int main() {

  int length = sizeof(numbers) / sizeof(numbers[0]);
  int left = 0;
  int right = length - 1;

  int key = 0;
  printf("Search: ");
  scanf("%d", &key);

  printf("Left\tRight\n");
  printf("%d\t%d\n", left, right);

  while (left <= right) {
    int middle = (left + right) / 2;

    if (numbers[middle] == key) {
      printf("Position: %d\n", middle);
      break;
    }
    else if (numbers[middle] < key) {
      left = middle + 1;
    }
    else if (numbers[middle] > key ) {
      right = middle - 1;
    }

    printf("%d\t%d\n", left, right);
  }



  return 0;
}
