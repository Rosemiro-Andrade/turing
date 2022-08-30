/*
	Rosemiro Andrade Da Silva-1515180065
	Mateus Mamede da Silva Marques-2015180069
	Mateus Do Amaral Graça-2115140087
*/

#include<stdio.h>

int main(int argc, char** argv)
{

	int t3, num, construtor = 3, t1 = 0, t2 = 1;

	printf("Digite um  numero: ");
	scanf("%d", &num);

	printf("%d -> %d", t1, t2);
	while(construtor <= num)
	{

		t3 = t1+t2;
		t1 = t2;
		t2 = t3;
		construtor += 1;

	printf("-> %d", t3);
	}
	printf("\n");
	return 0;
}
