/*
        Rosemiro Andrade Da Silva-1515180065
        Mateus Mamede da Silva Marques-2015180069
        Mateus Do Amaral Graça-2115140087
*/

#include <stdio.h>

int main(int argc, char **argv)
{
        int n;
        printf("diigite  o sque:\n");
        scanf("%d",&n);

        if(n>=100&&n<=600)
        {
                printf("notas de 100:%d\n",n/100);
        }
        if(n>=50)
        {
                printf("notas de 50:%d\n",(n%100)/50);
        }
        if(n>=10)
        {
                printf("notas de 10:%d\n",((n%100)%50)/10);
        }
        if(n>=5)
        {
                printf("notas de 5:%d\n",(((n%100)%50)%10)/5);
        }
        if(n>=1)
        {
                printf("notas de 1:%d\n",((((n%100)%50)%10)%5)/1);
        }
        if (n>=601)
        {
                printf("coloque outro valor!\n");
        }

        if (n<=0)
        {
                printf("valor invalido!\n");
        }

        return 0;
}
