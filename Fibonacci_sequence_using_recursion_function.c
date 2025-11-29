// write program to print Fibonacci sequence using recursion function
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n, i;
    printf("Enter the number of terms in Fibonacci sequence: \n");
    scanf("%d", &n);
    printf("Fibonacci sequence up to %d terms:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}       
int fibonacci(int s)
{
    if(s == 0)
        return 0;
    else if(s == 1)
        return 1;
    else 
        return (fibonacci(s - 1) + fibonacci(s - 2)); 
}