//Character triangle
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",'A'+j);//'A' to start with A
        }
        printf("\n");// to change the line
    }
    return 0;
}