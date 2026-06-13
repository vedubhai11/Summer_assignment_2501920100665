//finding sum and average of an array
#include<stdio.h>
int main()
{
    int i,n;//taking array of size n
    float sum=0,average;
    printf("Enter number of elements or size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter elements:\n");//Taking the input in array
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("Sum=%.2f\n",sum);
    printf("Average=%.2f\n",average);
    return 0;
}