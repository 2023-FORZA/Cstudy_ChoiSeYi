//1292

#include <stdio.h>

int main(void) {
  int A, B;
  int sum = 0;
  int current = 1;
  int count = 0;

  scanf("%d %d", &A, &B);

  for (int i = 1; i <= B; i++) {
    if (count == current) {
      current++;
      count = 0;
    }
    if (i >= A) {
      sum += current;
    }
    count++;
  }

  printf("%d", sum);

  return 0;
}
