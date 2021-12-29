#include <stdio.h>
#include "functions.h"

int main()
{
  char square[3][3] = {
      {'1', '2', '3'},
      {'4', '5', '6'},
      {'7', '8', '9'}};

  basicBoard(square, 9);

  return 0;
}
