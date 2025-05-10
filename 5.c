#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteString(char *str)
{
  int i, j;
  char temp;
  for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main(int argc, char *argv[])
{
  printf("Type a string: ");
  char str[100];
  if (fgets(str, sizeof(str), stdin) == NULL) {
    fprintf(stderr, "Error reading input\n");
    return EXIT_FAILURE;
  }

  // invert string
  str[strcspn(str, "\n")] = '\0'; // remove newline character
  inverteString(str);

  printf("Inverted string: %s\n", str);

  return EXIT_SUCCESS;
}
