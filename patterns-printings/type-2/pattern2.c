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
      printf("%d ", row);
    }
    printf("\n");
  }
}
/*
Input : 6
Output :
6 6 6 6 6 6
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/
