/*
        Rosemiro Andrade Da Silva-1515180065
        Mateus Mamede da Silva Marques-2015180069
        Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>

int main(int argc, char **argv)
{
        int a,b,c;
        printf("digite tres valores:\n");
        scanf("%d""%d""%d",&a,&b,&c);

        if (a+b>c&&a+c>b&&b+c>a)
        {
                printf("os lados formam um triangulo:\n");
        }
        if(a==b&&a==c)
        {
                printf("equilatero\n");
        }
        else if(a==b||a==c||b==c)
        {
                printf("isosceles\n");
        }
        else
        {
                printf("escaleno\n");
        }

        return 0;
}
