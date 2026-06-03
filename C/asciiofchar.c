// Given a printable ASCII character, find its ASCII value
// and print the corresponding next and previous ASCII characters.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char char1;
  scanf("%c", &char1);

  printf("%d\n", char1);
  printf("%c\n", char1 + 1);
  printf("%c\n", char1 - 1);

  return 0;
}