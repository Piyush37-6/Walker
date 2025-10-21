// 2D array input and output in c
#include<stdio.h>
int main(){
 int i, j, arr[3][3];
 printf("enter the elements:\n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

printf("the matrix is:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
}
}