//Problema "aumento" (adaptado de URI 1048) 
//Uma empresa vai conceder um aumento percentual de 
//salário aos seus funcionários dependendo de quanto 
//cada pessoa ganha, conforme tabela ao lado. Fazer um 
//programa para ler o salário de uma pessoa, daí mostrar 
//qual o novo salário desta pessoa depois do aumento, 
//quanto foi o aumento e qual foi a porcentagem de aumento. 

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

float Salario, Porcentagem, Aumento, NovoSalario;

printf("Digite o salario da pessoa: ");
scanf("%f", &Salario);

if(Salario <=1000 & Salario>0)
{
    Porcentagem=Salario*20/100;
    Aumento=Porcentagem;
    NovoSalario=Salario+Aumento;
    printf("Novo salario = R$ %.2f\n", NovoSalario);
    printf("Aumento = R$ %.2f\n", Aumento);
    printf("Porcentagem = 20%%\n");
}
if (Salario>1000 & Salario<=3000)
{
    Porcentagem=Salario*15/100;
    Aumento=Porcentagem;
    NovoSalario=Salario+Aumento;
    printf("Novo salario = R$ %.2f\n", NovoSalario);
    printf("Aumento = R$ %.2f\n", Aumento);
    printf("Porcentagem = 15%%\n");
}
if (Salario>3000 & Salario<=8000)
{
    Porcentagem=Salario*10/100;
    Aumento=Porcentagem;
    NovoSalario=Salario+Aumento;
    printf("Novo salario = R$ %.2f\n", NovoSalario);
    printf("Aumento = R$ %.2f\n", Aumento);
    printf("Porcentagem = 10%%\n");
}
if (Salario>8000)
{
    Porcentagem=Salario*5/100;
    Aumento=Porcentagem;
    NovoSalario=Salario+Aumento;
    printf("Novo salario = R$ %.2f\n", NovoSalario);
    printf("Aumento = R$ %.2f\n", Aumento);
    printf("Porcentagem = 5%%\n");
}


    return 0;
}
