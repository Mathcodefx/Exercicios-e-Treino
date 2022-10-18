//Problema "soma_impares" (adaptado de URI 1071)
//Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números 
//impares entre eles. 

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int x, y, calculo, calculo2, count1, count2;

printf("Digite dois numeros: ");
scanf("%d", &x);
scanf("%d", &y);


for (count1=1; count1<x; count1+=2){
    printf("%d\n", count1);
    calculo=count1+count1;
}

for (count2=1; count2<y; count2+=2){
    printf("%d\n", count2);
    calculo2=count2+count2;
}

printf("SOMA DOS IMPARES = %d", calculo);
printf("SOMA DOS IMPARES = %d", calculo2);

    return 0;
}

