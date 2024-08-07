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
      printf("%d ", col % 2);
    }
    printf("\n");
  }
}
/*
Input : 6
Output :
1 0 1 0 1 0
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/
