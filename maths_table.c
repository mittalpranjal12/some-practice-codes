#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n;

        printf("Enter a number for its table: ");
        scanf("%d", &n);

    for(int i = 1; i <= 10 ; i++)
    {
       printf("%d * %d = %d\n", n , i , n*i);
    }
return 0;
}