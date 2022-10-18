//Problema "pares_consecutivos" (adaptado de URI 1159)
//O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X 
//for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X 
//, se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 
//4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a 
//soma de 12+14+16+18+20. 

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int x, calculo, impar, par, x1, x2, x3, x4, x5;

printf("Digite um numero inteiro: ");
scanf("%d", &x);

while (x!=0)
{
    calculo=x%2;
    if (calculo==0)
    {
    x1=x+2;
    x2=x1+2;
    x3=x2+2;
    x4=x3+2;
    par=x+x1+x2+x3+x4;
    printf("SOMA = %d\n", par);
    }else if (calculo!=0){
    x1=x+1;
    x2=x1+2;
    x3=x2+2;
    x4=x3+2;
    x5=x4+2;
    impar=x1+x2+x3+x4+x5;
    printf("SOMA = %d\n", impar);
    }
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    
}




    return 0;
}
