#include <stdio.h>

struct Rectangle
{
  int length;
  int width;
};

int main(int argc, char const *argv[]) {

  struct Rectangle r1;
  struct Rectangle r2 = {3, 4};

  printf("%d", r2.width);
  return 0;
}
