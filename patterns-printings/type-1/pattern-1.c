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
            printf("%d ",col);
        }
        printf("\n");
    }
}
/*
Input : 6
Output :
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
