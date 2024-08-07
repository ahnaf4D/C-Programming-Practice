#include <stdio.h>
int main()
{
    int row, col, n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    for(row = 1 ; row <= n; ++row)
    {
        for(col = 1; col <= row; ++col)
        {
            printf("%c ",row + 64);
        }
        printf("\n");
    }
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
*/


