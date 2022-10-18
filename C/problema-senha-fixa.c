//Problema "senha_fixa" (adaptado de URI 1114)
//Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de 
//senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha 
//for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo 
//encerrado. Considere que a senha correta é o valor 2002

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int x;

printf("Digite a senha: ");
scanf("%d", &x);

if (x == 2002)
{
   printf("Acesso permitido!");
}
else 
{
    while (x != 2002)
    {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &x);
        if (x == 2002)
        {
        printf("Acesso permitido!");
        }
        
    }
    
}





    return 0;
}
