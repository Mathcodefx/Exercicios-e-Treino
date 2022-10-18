/*Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de 
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo 
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar 
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida 
pela soma dos pesos. */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, x;
float nota1, nota2, nota3, mp;

printf("Quantos casos voce vai digitar? ");
scanf("%d", &x);

for (n=0; n<x; n++){
    printf("Digite tres numeros: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    mp=((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
    printf("MEDIA = %.1f\n", mp);
}


    return 0;
}
