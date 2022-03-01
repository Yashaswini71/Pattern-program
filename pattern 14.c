#include<stdio.h>
#define n 5

int main()
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        printf("     ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        while(j<=n)
        {
            printf("*");
            j++;
        }
        printf("\n");  
    }
    return 0;
}