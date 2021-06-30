#include <iostream>

using namespace std;

struct Rectangle
{
  int length;
  int width;
};

int main(int argc, char const *argv[]) {

  struct Rectangle r1;
  struct Rectangle r2 = {3, 4};


  struct Rectangle r3[2] = {{12,15},{8,6}};


  cout << r2.width << endl;
  cout << r3[1].width;
  return 0;
}
