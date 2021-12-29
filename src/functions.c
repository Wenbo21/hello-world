#include "functions.h"

// Basic Board
void basicBoard(char square[3][3], int arraysize)
{
  int j = 0;
  for (int i = 0; i < 3; i++)
  {
    printf("|---|---|---| \n");
    printf("| %c | %c | %c |\n", square[i][j], square[i][j + 1], square[i][j + 2]);
  }
  printf("|---|---|---| \n");
}
