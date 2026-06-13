//take input and display array
#include<stdio.h>
int main()
{
    int i,arr[10];//size of array is taken 10 and defined by user
    for(i=0;i<10;i++)
    {
        printf("Enter Number:");//Taking the input
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}