/**Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, 
se for o caso. **/


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int x, y;

printf("Digite o valor de X: ");
scanf("%d", &x);

for (y=1; y<x; y+=2){
printf("%d\n", y);
}
    return 0;
}
