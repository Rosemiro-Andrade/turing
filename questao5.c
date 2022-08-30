/*
	Rosemiro Andrade Da Silva-1515180065
	Mateus Mamede da Silva Marques-2015180069
	Mateus Do Amaral Graça-2115140087
*/
#include <stdio.h>
int main(int argc, char **argv)
{
	int a;
	printf("Digite a nota: \n");
	scanf("%d", &a);

	while (a<0 || a>10)
	{
		printf("nota invalida, digite uma nova nota: ");
		scanf("%d", &a);
	}

	return 0;
}
