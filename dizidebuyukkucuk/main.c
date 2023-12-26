#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int buyuk,kucuk;
    printf("diziyi giriniz\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
    }
    buyuk=dizi[0];
    for(int i=0;i<10;i++)
    {
        if(dizi[i]>buyuk)
        {
            buyuk=dizi[i];
        }
    }
    kucuk=dizi[0];
    for(int i=0;i<10;i++)
    {
        if(dizi[i]<kucuk)
        {
            kucuk=dizi[i];
        }
    }
    printf("en kucuk: %d ve en buyuk: %d",kucuk,buyuk);
    return 0;
}
