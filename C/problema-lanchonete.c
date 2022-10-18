//ma lanchonete possui vários produtos. Cada produto possui um código 
//e um preço. Você deve fazer um programa para ler o código e a 
//quantidade comprada de um produto (suponha um código válido), e daí 
//informar qual o valor a ser pago, com duas casas decimais, conforme 
//tabela de produtos ao lado. 
#include <stdio.h>
#include <locale.h>


int main (){
setlocale(LC_ALL, "portguese_brazil");

int A, B;
float Pagamento;

printf("Codigo do produto comprado: ");
scanf("%d", &A);

if (A<1)
{
    printf("comando inválido, digite o código do cardápio.");
    return 0;
} else  if (A>5)
    {
     printf("comando inválido, digite o código do cardápio.");
     return 0;
    }
    
printf("Quantidade comprada: ");
scanf("%d", &B);

if (A==1)
{
Pagamento=B*5;
printf("Valor a pagar: R$ %.2f", Pagamento);
}
if (A==2)
{
Pagamento=B*3.5;
printf("Valor a pagar: R$ %.2f", Pagamento);
}
if (A==3)
{
Pagamento=B*4.80;
printf("Valor a pagar: R$ %.2f", Pagamento);
}
if (A==4)
{
Pagamento=B*8.90;
printf("Valor a pagar: R$ %.2f", Pagamento);
}
if (A==5)
{
Pagamento=B*7.32;
printf("Valor a pagar: R$ %.2f", Pagamento);
}

    return 0;
}


