#include <stdio.h>

int main()
{
  int n, row, col;
  printf("Enter the value of N : ");
  scanf("%d", &n);
  for (row = 1; row <= n; ++row)
  {
    for (col = 1; col <= n; ++col)
    {
      printf("%d", col);
    }
    printf("\n");
  }
  return 0;
}
// Input : 6
/**
Output
123456
123456
123456
123456
123456
123456
 */