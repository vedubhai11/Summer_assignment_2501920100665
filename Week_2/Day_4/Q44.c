//factorial program by function
#include<stdio.h>
int factorial(int);//Function prototype
void main()
{
    int n,fact;
    printf("Enter the number :\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d = %d",n,fact);
}
int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)//runs a loop and and geting the factorial
    {
        f=f*i;
    }
    return f;
}