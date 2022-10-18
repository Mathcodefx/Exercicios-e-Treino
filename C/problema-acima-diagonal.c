/*Problema "acima_diagonal" 
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N 
contendo números inteiros. Mostrar a soma dos elementos acima da 
diagonal principal. Um exemplo de números acima da diagonal 
principal é mostrado ao lado (no caso as células com fundo cinza). */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, somador=0;

printf("Qual a ordem da matriz? ");
scanf("%d", &n);

int mat[n][n], soma[n][n];

for (int i= 0; i < n; i++)
{
    for (int j = 0; j <n; j++)
    {
        printf("Elemento [%d,%d]: ", i,j);
        scanf("%d", &mat[i][j]);
    }
    
}

for (int i= 0; i < n; i++)
{
    for (int j = 1; j <n; j++)
    {
        if (i<j)
        {
        somador=somador+mat[i][j];
        }
    }
    
}

printf("%d", somador);



    return 0;
}
