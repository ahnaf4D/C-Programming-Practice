#include <stdio.h>

int main()
{
  int row, col, n;
  printf("Enter the value of N : ");
  scanf("%d", &n);
  for (row = 1; row <= n; ++row)
  {
    for (col = 1; col <= row; ++col)
    {
      printf("%c ", row + 64);
    }
    printf("\n");
  }
  for (row = n - 1; row >= 1; --row)
  {
    for (col = 1; col <= row; ++col)
    {
      printf("%c ", row + 64);
    }
    printf("\n");
  }
  return 0;
}
/*
Input : 6
Output :
A
B B
C C C
D D D D
E E E E E
F F F F F F
E E E E E
D D D D
C C C
B B
A
*/
