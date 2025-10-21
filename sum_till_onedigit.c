// write a program to add the digit of a no till a single digit no 
#include <stdio.h>
int main() {
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num >= 10) {
        sum = 0; 
        while (num > 0) {
            sum += num % 10; 
            num /= 10; }
   num = sum; 
 } 
    printf("Single digit result is: %d\n", sum);
    return 0;
}
