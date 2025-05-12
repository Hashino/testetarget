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
  printf("Digite um número positivo: ");
  int n;
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "Entrada invalida\n");
    exit(EXIT_FAILURE);
  } else if (n < 0) {
    fprintf(stderr, "Números negativos não permitidos\n");
    exit(EXIT_FAILURE);
  } else {
    if (isFibonacci(n)) {
      printf("%d é um número de Fibonacci\n", n);
    } else {
      printf("%d não é um número de Fibonacci\n", n);
    }
  }
  exit(EXIT_SUCCESS);
}
