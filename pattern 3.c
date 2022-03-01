#include<stdio.h>
#define n 5
int main()
{
    int i,j;
    for(i=1;i<=n;i++)
{
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}