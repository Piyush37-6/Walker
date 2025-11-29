//wap to find the max of an array unsing function
#include <stdio.h>
 int fun_array_max(int [],int);
 int main() {
        int s, arr[10],i;
        printf ("enter the size of the array\n");
        scanf("%d",&s);
        printf("enter the elements one by one \n");
        for(i=1;i<=s;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("the maximum element in this array is %d \n",fun_array_max(arr,s));
        return 0;
     }
     int fun_array_max(int b[],int a)
     {
        int j;
        int max=b[0];
        for(j=1;j<a;j++)
        {
          if(b[j]>max)
          max=b[j];
        }
        return max;
     }