#include<stdio.h>
#include<conio.h>

int main() 
{
    int n, sum = 0, a;
    printf("Enter an integer: ");
    scanf("%d", &n);
    a = n;

    // reversed integer is stored in sum
    while (n != 0) {
        
       sum = sum * 10 + n % 10;
        n /= 10;
    }

    // palindrome if n and a are equal
    if (sum == a)
        printf("\n%d is a palindrome.", a);
    else
        printf("\n%d is not a palindrome.", a);

    return 0;
}