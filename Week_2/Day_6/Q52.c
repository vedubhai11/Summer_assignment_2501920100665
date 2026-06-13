//total number of even and odd  elements in a array
#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;;//taking array of size n
    printf("Enter number of elements or size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");//Taking the input in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("Total even=%d and odd=%d",even,odd);
    return 0;
}