/*Problema "soma_vetor" 
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: 
- Imprimir todos os elementos do vetor 
- Mostrar na tela a soma e a média dos elementos do vetor */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");


int n, i;

printf("Quantos numeros voce vai digitar? ");
scanf("%d", &n);

float vet[n], media,soma=0;

for  (i=0; i<n; i++)
{
    printf("Digite um numero: ");
    scanf("%f", &vet[i]);
}

printf("VALORES = ");

for  (i=0; i<n; i++)
{
printf("%.2f  ", vet[i]);
soma= soma+vet[i];
media= soma/n;
}

printf("\nSOMA = %.2f\n", soma);
printf("MEDIA = %.2f\n", media);
    return 0;
}
