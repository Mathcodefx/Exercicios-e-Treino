/*Problema "maior_posicao" 
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela 
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, 
considerando a primeira posição como 0 (zero)*/

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, i;

printf("Quanto numeros voce vai digitar? ");
scanf("%d", &n);

int vet[n], posmaior=0, maior=0;

for (i = 0; i<n; i++)
{
    printf("Digite um numero: ");
    scanf("%d", &vet[i]);

    if (vet[i]>maior)
    {
        maior=vet[i];
        posmaior=i;
    }
}







printf("\n%d\n", maior);
printf("%d\n", posmaior);

    return 0;
}

