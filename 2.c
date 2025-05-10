#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

bool isFibonacci(int n) {
  int a = 0, b = 1, c = 0;
  if (n == a || n == b) {
    return true;
  }
  while (c < n) {
    c = a + b;
    a = b;
    b = c;
    if (c == n) {
      return true;
    }
  }
  return false;
}

int main(int argc, char *argv[]) {

  printf("Type a number: ");
  int n;
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "Invalid input\n");
    return EXIT_FAILURE;
  } else if (n < 0) {
    fprintf(stderr, "Negative numbers are not allowed\n");
    return EXIT_FAILURE;
  } else {
    if (isFibonacci(n)) {
      printf("%d is a Fibonacci number\n", n);
    } else {
      printf("%d is not a Fibonacci number\n", n);
    }
  }
  return EXIT_SUCCESS;
}
