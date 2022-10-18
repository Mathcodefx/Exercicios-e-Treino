/*Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o 
fatorial de N.*/


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, fatorial, count;

printf("Digite o valor de N: ");
scanf("%d", &n);

fatorial =1;

for (int count=n; count>0; count--)
{
    fatorial= fatorial*count;
}

 printf("FATORIAL = %d\n", fatorial);


    return 0;
}

