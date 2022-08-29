/*
        Rosemiro Andrade Da Silva-1515180065
        Mateus Mamede da Silva Marques-2015180069
        Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>

int main(int argc, char **argv)
{

        int a,b,c;

        printf("preço de produto a reais:\n");
        scanf("%d",&a);

        printf("preço de produto b reais:\n");
        scanf("%d",&b);

        printf("preço de produto c reais:\n");
        scanf("%d",&c);

        if(a<b&&a<c)
        {
                printf("o menor preço é reais:%d\n",a);
        }
        else
                if(b<a&&b<c)
        {
                printf("o menor preço é reais:%d\n",b);
        }
        else
        {
                printf("o menor preço é reais:%d\n",c);
        }

        return 0;
}
