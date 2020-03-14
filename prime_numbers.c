#include<stdio.h>
#include<conio.h>

int main()
{
    int n , i, p=0;
        //number divisible by 1 and itself
      printf("Enter a number to check whether it is prime or not: ");
      scanf("%d", &n);

    for(i = 1; i <= n; i++)  //1 is neither prime nor composite
    {
        if( n %i == 0)      //prime number has only two factors: 1 and number itself
        {
            p++;
        }
    }
        if(p == 2)          //so if maximum 2 factors then its a prime number
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    return 0;
        
}