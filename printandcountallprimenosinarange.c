// write a program to print and count all prime numbers in a range
#include<stdio.h>
int main()
{
    int lower, upper, i, j, isPrime, count = 0;

    printf("Enter two numbers (lower and upper): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for(i = lower; i <= upper; i++)
    {
        if(i <= 1){
            continue;
        }

        isPrime = 1; 
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0; 
                break;
            }
        }

        if(isPrime == 1)  
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers between %d and %d: %d\n", lower, upper, count);
    return 0;
}