/*
	Rosemiro Andrade Da Silva-1515180065
	Mateus Mamede da Silva Marques-2015180069
	Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	int a, cont, div;
	div=0;
	cont=1;
	printf("Digite um numero: \n");
	scanf("%d", &a);

	while (cont<=a)
	{
		a/cont;

		if ((a%cont)==0)
		{
			div= div+1;
		}
		cont= cont+1;
	}
	if (div==2)
	{
		printf("E um numero primo \n");
	}
	else
	{
		printf("Nao e um numero primo \n");
	}
	return 0;
}

