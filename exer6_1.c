/*
	Rosemiro Andrade Da Silva-1515180065
	Mateus Mamede da Silva Marques-2015180069
	Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>

int main(int argc, char **argv)
{
        int a,b;
        printf("digite um numero:\n");
        scanf("%d",&a);

        printf("digite outro valor:\n");
        scanf("%d",&b);

        if (a>b)
        {
                printf("o maior valor de:%d\n",a);
        }
        else
        {
                printf("o maior valor e:%d\n",b);
        }

        return 0;
}
