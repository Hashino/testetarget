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

  printf("SP is %.2f%% of total\n", total == 0 ? 0 : (sp / total) * 100);
  printf("RJ is %.2f%% of total\n", total == 0 ? 0 : (rj / total) * 100);
  printf("MG is %.2f%% of total\n", total == 0 ? 0 : (mg / total) * 100);
  printf("ES is %.2f%% of total\n", total == 0 ? 0 : (es / total) * 100);
  printf("Outros is %.2f%% of total\n",
         total == 0 ? 0 : (outros / total) * 100);

  return EXIT_SUCCESS;
}
