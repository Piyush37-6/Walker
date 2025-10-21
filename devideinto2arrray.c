// wap program to divide an array into even and odd arrays

#include<stdio.h>
int main(){
    int i, n,j=0,k=0,arr[n],even[n],odd[n];
    printf("enter teh size/\n");
    scanf("%d",&n);
    printf("enter the elements now\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
        even[k]=arr[i];
        k++;
    }
    else{
        odd[j]=arr[i];
        j++;
    }

    }
    printf("the given array is\n");
    for(i=0;i<10;i++){
     printf("%d\t\n",arr[i]);} 

    printf("the even array is\n");
    for(i=0;i<k;i++){
     printf("%d\t\n",even[i]);}

    printf("the odd array is\n");
    for(i=0;i<j;i++){
     printf("%d\t\n",odd[i]);
    }

    return 0;
}
