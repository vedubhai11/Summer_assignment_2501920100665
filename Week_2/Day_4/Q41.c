//Sum of two number by function
#include<stdio.h>
#include<conio.h>
void sum(int,int);//tells the compiler that a function accepts two integer
void main()
{
    int a,b,c;
    printf("Enter two number a and b\n");
    scanf("%d%d",&a,&b);
    sum(a,b);//passes the values of 'a' and 'b'(actual arguments) to the sum function
}
//function defination
void sum(int x,int y)//x and y formal parameter that recives the value
{
    int z;
    z=x+y;
    //printing the final calculated sum
    printf("Sum =%d",z);
}