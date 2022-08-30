/*
	Rosemiro Andrade Da Silva - 1515180065
	Mateus Mamede da Silva - 2015180069
	Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>

int main(int argc, char **argv)
{
        float a, b,cont=0,mult=1;
        printf("digite um valor:\n");
        scanf("%f",&a);
        printf("diigite um valor:\n");
        scanf("%f",&b);

        while(cont!=b)
        {
                mult=mult*a;
                cont=cont+1;
        }
        printf("o valor da base:%.1f\n",a);
        printf("o valor do expoente:%.1f\n",b);
        printf("o resultado é:%.f\n",mult);

        return 0;
}
