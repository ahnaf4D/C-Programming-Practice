#include <stdio.h>

int main()
{
  int n, row, col;
  printf("Enter the value of N : ");
  scanf("%d", &n);
  for (row = 1; row <= n; ++row)
  {
    for (col = 1; col <= n - row; ++col)
    {
      printf(" ");
    }
    for (col = 1; col <= row; ++col)
    {
      printf("%d", col);
    }
    printf("\n");
  }
  return 0;
}
/**
 * Input : 6
 * Output :
     1
    12
   123
  1234
 12345
123456
 */