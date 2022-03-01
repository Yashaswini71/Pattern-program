#include<stdio.h>
#define n 5
int main()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j>1;j--)
        {
            printf("  ");
        }
        while(j<=n)
        {
            printf("* ");
            j++;
        }
        printf("\n");
    }
    return 0;
}