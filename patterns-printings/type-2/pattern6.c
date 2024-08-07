#include <stdio.h>
int main()
{
  int row, col, n;
  printf("Enter the value of N : ");
  scanf("%d", &n);
  for (row = n; row >= 1; --row)
  {
    for (col = 1; col <= row; ++col)
    {
      printf("%c ", row + 64);
    }
    printf("\n");
  }
}
/*
Input : 6
Output :
F F F F F F
E E E E E
D D D D
C C C
B B
A

*/
