//Problema "glicose" 
//Fazer um programa para ler a quantidade de glicose 
//no sangue de uma pessoa e depois mostrar na tela a 
//classificação desta glicose de acordo com a tabela de 
//referência ao lado. 
//Classificação Glicose 
 //Normal Até 100 mg/dl 
//Elevado 
//Maior que 100 até 
//140 mg/dl 
// Diabetes Maior de 140 mg/dl 

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float MedidaGlicose;

printf("Digite a medida da glicose: ");
scanf("%f", &MedidaGlicose);

if (MedidaGlicose  <=100)
{
printf("Classificação: Normal ", MedidaGlicose);
}
else if (MedidaGlicose <=140)
{
printf("Classificação: Elevado ", MedidaGlicose);
}
else
printf("Classificação: Diabetes ", MedidaGlicose);


    return 0;
}
