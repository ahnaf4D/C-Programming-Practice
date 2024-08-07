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
      printf("%c ", col + 64);
    }
    printf("\n");
  }
}
/*
Input : 6
Output :
A B C D E F
A B C D E
A B C D
A B C
A B
A
*/
