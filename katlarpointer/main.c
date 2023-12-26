#include <stdio.h>
#include <stdlib.h>

void test(int *x)
{
    if(*x%2==0)
    {
        printf("sayi 2 nin kati\n");
    }
    if(*x%3==0)
    {
        printf("sayi 3 un kati\n");
    }
    if(*x%6==0)
    {
        printf("sayi 6 nin kati");
    }
}

int main()
{
    int i;
    printf("sayiyi giriniz\n");
    scanf("%d",&i);
    test(&i);
    return 0;
}
