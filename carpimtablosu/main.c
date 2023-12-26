#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=10;
    int dizi[10][10];
    printf("   I");
    for(i=0;i<n;i++)
    {
        printf("%4d",i+1);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("-----");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            dizi[i][j]=(i+1)*(j+1);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%4d",i+1);
        for(j=0;j<n;j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
