//finding largest and smallest element of an array
#include<stdio.h>
int main()
{
    int i,n,larg,small;//taking array of size n
    printf("Enter number of elements or size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");//Taking the input in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    larg=arr[0];
    small=arr[0];
    for(i=1;i<n;i++)
    {
        if(larg < arr[i])
        {
            larg=arr[i];
        }
        if(small > arr[i])
        {
            small=arr[i];
        }
    }
    printf("Largest is %d and Smallest is %d",larg,small);
    return 0;
}