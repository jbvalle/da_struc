#include <stdio.h>

struct Rectangle
{
  int length;
  int width;
};

int main(int argc, char const *argv[]) {

  struct Rectangle r1;
  struct Rectangle r2 = {3, 4};

  struct Rectangle r3[2] = {{12,15},{8,6}};
  printf("%d\n", r2.width);
  printf("%d\n", r3[0].length );
  return 0;
}
