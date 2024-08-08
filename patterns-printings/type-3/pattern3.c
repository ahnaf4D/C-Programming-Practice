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
      printf("%c ", col + 64);
    }
    printf("\n");
  }
  for (row = n - 1; row >= 1; --row)
  {
    for (col = 1; col <= row; ++col)
    {
      printf("%c ", col + 64);
    }
    printf("\n");
  }
  return 0;
}
/*
Input : 6
Output :
A
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
