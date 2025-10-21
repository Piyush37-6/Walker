#include<stdio.h>
int main(){

   int i,arr[10],sum=0;//decalration of array and here 10 is the size of the array
   //default index value of c is 0 then goes increasing 
   printf("enter 10 numbers:") ;
   for(i=0;i<10;i++)
   {
      scanf("%d",&arr[i]);
      sum+=arr[i];
   }
   
   printf("sum=%d\n size of array is %d",sum,sizeof(arr));

}