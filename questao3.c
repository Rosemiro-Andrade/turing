/*
Mateus Mamede da Silva Marques-2015180069
Matheus do Amaral Graça-2115140087
Rosemiro Andrade da Silva-1515180065
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	int cont, a;
	cont=1;

	while (cont <= 50)
	{
		if ((cont%2) != 0)
		{
			printf("%d \n", cont);
		}

		cont=cont+1;
	}

	return 0;
}
