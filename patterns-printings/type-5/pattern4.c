#include <stdio.h>

int main()
{
  int n, row, col;
  printf("Enter the value of N : ");
  scanf("%d", &n);
  for (row = n; row >= 1; --row)
  {
    for (col = 1; col <= n - row; ++col)
    {
      printf(" ");
    }
    for (col = 1; col <= row; ++col)
    {
      printf("%d", row % 2);
    }
    printf("\n");
  }
  return 0;
}
/**
 * Input : 6
Output :
000000
 11111
  0000
   111
    00
     1
 */