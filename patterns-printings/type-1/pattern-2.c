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
            printf("%d ",row);
        }
        printf("\n");
    }
}
/*
Input : 6
Output :
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
*/

