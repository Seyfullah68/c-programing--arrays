#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int sayi[26]={0};
    int i,j,tane,say=0;
    printf("cumleyi giriniz\n");
    gets(cumle);
    i=0;
    while(cumle[i]!='.')
    {
        if(cumle[i]>='a'&&cumle[i]<='z')
        {
           sayi[cumle[i]-'a']++;
           say++;
        }
        i++;

    }
    printf("%d karakter\n",say);
    for(i=0;i<26;i++)
    {
        printf("%c karakterinden %d kadar\n",i+'a',sayi[i]);
    }

    return 0;
}
