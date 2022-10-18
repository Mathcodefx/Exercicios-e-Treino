//Problema "dardo" 
//No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. 
//Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual 
//foi a maior.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float Lancamento1, Lancamento2, Lancamento3;

printf("Digite as tres distancias:\n");
scanf("%f %f %f", &Lancamento1, &Lancamento2, &Lancamento3);


if (Lancamento1>Lancamento2 & Lancamento1>Lancamento3)
printf("MAIOR DISTÂNCIA = %.2f", Lancamento1);
else if (Lancamento2>Lancamento1 & Lancamento2>Lancamento3)
printf("MAIOR DISTÂNCIA = %.2f", Lancamento2);
else
printf("MAIOR DISTÂNCIA = %.2f", Lancamento3);


    return 0;
}
