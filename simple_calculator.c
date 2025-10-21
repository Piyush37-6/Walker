#include<stdio.h>
int main()
{
    char operator;
    double first, second, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch(operator)
    {
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '*':
            result = first * second;
            break;
        case '/':
            if(second != 0)
                result = first / second;
            else
            {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", first, operator, second, result);
    return 0;
}