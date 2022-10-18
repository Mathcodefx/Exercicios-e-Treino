/*Problema "alturas" 
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na 
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, 
bem como os nomes dessas pessoas caso houver. */

#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, i;
char nome[n][50];

printf("Quantas pessoas serao digitadas? ");
scanf("%d", &n);

float  idade[n], altura, media=0, porcentagem=0, total=0, totalnegativo=1;

for (i=0; i<n; i++)
{
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%f", &idade);
    printf("Altura: ");
    scanf("%f", &altura);
}


for (i=0; i<n; i++)
{
    if (idade<16)
    {
        totalnegativo= totalnegativo + 1;
    }
    total=total+altura;
    media=total/n;
    porcentagem= (totalnegativo*100)/n;
}

printf("Altura média: %.2f\n", media);
printf("Pessoas com menos de 16 anos: %.1f%%\n", porcentagem);

for (i=0; i<n; i++)
{
    if (idade[i]<16)
    {
        printf("%s\n", nome);
    }
}




    return 0;
}
