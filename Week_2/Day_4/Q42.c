//maximum number amoung three number by function
#include<stdio.h>
int max(int,int,int);//function prototype
void main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    //function call max(a,b,c)
    printf("Maximum among three number is %d\n",max(a,b,c));
}
int max(int x,int y,int z)
{
    if(x>=y && x>=z)//checking the number which is greater
    {
        return x;
    }
    else
    {
        if(y>=z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}