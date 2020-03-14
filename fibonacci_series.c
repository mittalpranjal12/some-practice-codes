#include<stdio.h>
#include<conio.h>

int fibonacci(int a);

int main()
{
    int n , i=0;

        printf("Enter a number: ");
        scanf("%d", &n);

        printf("Fibonacci series: \n");

    while(i < n)
    {
         printf("%d\n", fibonacci(i));
         i++;
    }
   return 0;
}

int fibonacci(int a)
{
    if( (a == 1) || (a == 0))
    {
        return (a);
    }
    else
    {
        return fibonacci(a-1) + fibonacci(a-2);
    }
}