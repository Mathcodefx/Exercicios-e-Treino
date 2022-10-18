/*Problema "numeros_pares" 
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na 
tela todos os números pares, e também a quantidade de números pares. */


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, i, pares;

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &n);

int vet[n], count;

for ( i = 0; i<n; i++)
{
   printf("Digite um numero: ");
   scanf("%d", &vet[i]);
}

printf("NUMEROS PARES: \n");

count=0;
for ( i = 0; i <n; i++)
{
    if (vet[i] % 2 == 0) {
    printf("%d  ", vet[i]);
    count++;
    }
}

printf("\nQUANTIDADE DE PARES = %d", count);

    return 0;
}
