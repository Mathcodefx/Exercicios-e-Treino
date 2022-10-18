//Problema "combustivel" (adaptado de URI 1134)
//Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
//Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 
//1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 
//4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o 
//código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem 
//como as quantidades de cada combustível. 


#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int alcool=0, gasolina=0, diesel=0, x;

printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
scanf("%d", &x);

while (x<0 || x>4)
{
    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &x);
    if (x==1){
      alcool += x;
    }
        if (x==2){
      gasolina += x;
    }
    if (x==3){
      gasolina += x;
    }
}
printf("MUITO OBRIGADO!");

printf("Alcool: %d", alcool);
printf("Gasolina: %d", gasolina);
printf("Diesel: %d", diesel);


    return 0;
}

