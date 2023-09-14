#include <stdio.h>

int main() {
  int a, result = 1, i = 1;
  while (i <= 3 && scanf("%d", &a)) {
    result *= a;
    i++;
  }
  printf("%d\n", result);
}
