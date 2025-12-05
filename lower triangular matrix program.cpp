#include <stdio.h>
int main() 
{
    int a[100][100],n,i,j,lower=1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
	printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
	{
        for (j = 0; j < n; j++) 
		{
            if (j>i && a[i][j]!=0 || j<=i && a[i][j]==0)
			{
                lower=0;
                break;
            }
        }
    }

    if (lower == 1)
    {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else
    {
        printf("The matrix is NOT a lower triangular matrix.\n");
    }
     return 0;
}
