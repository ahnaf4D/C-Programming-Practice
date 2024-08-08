#include <stdio.h>

int main()
{
  int n, row, col;
  printf("Enter the value of N : ");
  scanf("%d", &n);

  // First half
  for (row = 1; row <= n; ++row)
  {
    for (col = 1; col <= n - row; ++col)
    {
      printf(" ");
    }
    for (col = 1; col <= row; ++col)
    {
      printf("%c", col + 64);
    }
    printf("\n");
  }

  // Second half
  for (row = n - 1; row >= 1; --row)
  {
    for (col = 1; col <= n - row; ++col)
    {
      printf(" ");
    }
    for (col = 1; col <= row; ++col)
    {
      printf("%c", col + 64);
    }
    printf("\n");
  }

  return 0;
}
// Input : 6
// Output
//      A
//     AB
//    ABC
//   ABCD
//  ABCDE
// ABCDEF
//  ABCDE
//   ABCD
//    ABC
//     AB
//      A