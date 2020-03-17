#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, array[50][50], n,m;

        printf("Enter the number of rows and columns for 2D array: ");
        scanf("%d %d", &m, &n);

        printf("\nEnter the elements in array: \n");

            for(i = 0; i < m; i++)
            {
                for(j = 0; j < n; j++)
                {
                    printf("Enter value for array[%d][%d]:", i, j);
                    scanf("%d", &array[i][j]);
                }
            }
        printf("\nThe array is: \n");

                for(i = 0; i < m; i++)
            {
                for(j = 0; j < n; j++)
                {
                    printf("%d ", array[i][j]);
                   
                }
            }
return 0;
}