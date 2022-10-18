//Problema "operadora" 
//Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de 
//telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para 
//ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago. 



#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float  ValorPago;
int MinutosUsados, ValorExcedente;

printf("Digite a quantidade de minutos: ");
scanf("%d", &MinutosUsados);

if (MinutosUsados <100 >0)  
{
printf("R$ 50.00");

} else 
ValorExcedente= (MinutosUsados%100)*2;
ValorPago=50+ValorExcedente;

printf("Valor a pagar: R$%.2f", ValorPago);

return 0;
}