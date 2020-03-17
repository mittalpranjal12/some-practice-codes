#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;
        printf("Enter two numbers: ");
        scanf("%d %d", &x, &y);

        printf("The integers before swapping are: %d,%d", x, y);

    swap(&x, &y);

        printf("\nThe integers after swapping are: %d,%d", x, y);
return 0;
}

void swap(int *a, int *b)       //call by reference
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}