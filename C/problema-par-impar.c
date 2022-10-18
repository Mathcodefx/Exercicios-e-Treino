/** Problema "par_impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. 
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também 
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir 
apenas NULO. **/


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int N, X, n, par;

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &N);

for (X=0; X<N; X++)
{
    printf("Digite um numero: ");
    scanf("%d", &n);
    par=n%2;

    if (n>0 && par==0)
    {
        printf("PAR POSITIVO\n");
    }else if (n<0 && par==0)
    {
        printf("PAR NEGATIVO\n");
    }else if (n<0 && par!=0)
    {
        printf("IMPAR NEGATIVO\n");
    }else if (n>0 && par!=0)
    {
        printf("IMPAR POSITIVO\n");
    }else if (n==0)
    {
        printf("NULO\n");
    }
    
    
}

    return 0;
}

