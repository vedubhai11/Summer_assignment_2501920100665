//check prime number  by function
#include<stdio.h>
void checkprime(int);//function prototype
int main()
{
    int num;
    printf("Enter a numbers to check if it is prime or not\n");
    scanf("%d",&num);
    checkprime(num);
    return 0;//return interger
}
void checkprime(int n)
{
    int i,fact=0;
    for(i=1;i<=n;i++)
    {
        if(n % i==0)//if 'i' is factor of n
        {
            fact=fact+1;
        // if factor is greater than two it is definately not prime
        if(fact>2)
        {
        break;
        }
    }
    }
    if(fact==2)//if fact is equal to 2 than it is prime as prime number has only two factors
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
