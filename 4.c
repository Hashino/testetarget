#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float sp = 67836.43;
  float rj = 36678.66;
  float mg = 29229.88;
  float es = 27165.48;
  float outros = 19849.53;

  float total = sp + rj + mg + es + outros;

  printf("Total: %.2f\n", total);

  printf("SP é %.2f%% do total\n", (sp / total) * 100);
  printf("RJ é %.2f%% do total\n", (rj / total) * 100);
  printf("MG é %.2f%% do total\n", (mg / total) * 100);
  printf("ES é %.2f%% do total\n", (es / total) * 100);
  printf("Outros é %.2f%% do total\n", (outros / total) * 100);

  exit(EXIT_SUCCESS);
}
