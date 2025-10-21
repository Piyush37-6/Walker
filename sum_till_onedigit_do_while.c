// write a program to add the digit of a no till a single digit no using  do while loop 
#include <stdio.h>
int main() {
    int num, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    do{
        sum = 0; 
        do {
            sum += num % 10; 
            num /= 10; }while (num > 0);
      num= sum; 
 } while(num >= 10);
    printf("Single digit result is: %d\n", num); 
    return 0;
}
