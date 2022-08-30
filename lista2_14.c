/*
	Rosemiro Andrade Da Silva-1515180065
	Mateus Mamede da Silva Marques-2015180069
	Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>

int main(int argc, char **argv)
{
        float n, cont=2, soma=1;
        printf("digite o numero de termos:");
        scanf("%f",&n);
        printf("H=1+");

        while(cont<n)
        {
                printf("1/%.0f+",cont);
                soma=soma+(1/cont);
                cont=cont+1;
        }
        printf("1/%.0f \n",n);
        printf("a soma é:%.3f\n",soma+1/n);

        return 0;
}
