//Problema "crescente" (adaptado de URI 1113) 
//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma 
//mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O 
//programa deve finalizar quando forem digitados dois valores iguais. 

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int x, y;

printf("Digite dois numeros: ");
scanf("%d %d", &x, &y);
if (x<y)
{
        printf("CRESCENTE!\n");
    }else 
    {
        printf("DECRESCENTE!\n");
}
while (x!=y)
{
    printf("Digite outros dois numeros: ");
    scanf("%d %d", &x, &y);
    if (x<y)
    {
        printf("CRESCENTE!\n");
    }else if (y>x)
    {
        printf("DECRESCENTE!\n");
    }
    
}




    return 0;
}
