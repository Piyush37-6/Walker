
#include <stdio.h>  
int main()  
{
    int i,k,j,check=0;
    printf("enter 2 positive no");
    scanf("%d%d",&i,&j);
    if (i<=1){
    printf("not valid input");
    return 0;
   }
    
    for(j=2;j<=i/2;j++)
    { 
     if(i%j==0){
        check=1;
        break;
      }
    }
      
    if (check==0){
        printf( "%d is a prime no",i);
       }
    else {
        printf("%d is not a prime no ",i);
       }
    return 0;
}