/*Problema "soma_matrizes" 
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas 
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma 
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada. */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int m, n, linha=0, coluna=0;

printf("Quantas linhas vai ter cada matriz? ");
scanf("%d", &m);
printf("Quantas colunas vai ter cada matriz? ");
scanf("%d", &n);

int matA[m][n], matB[m][n], matC[m][n];

printf("Digite os valores da matriz A: \n");

for (int i=0; i<m; i++)
{
    for (int j=0; j<n; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%d", &matA[i][j]);
    }
    
}

printf("Digite os valores da matriz B: \n");

for (int i = 0; i <m; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%d", &matB[i][j]);
    }
    
}

printf("MATRIZ SOMA: \n");

for (int i = 0; i <m; i++)
{
   
    for (int j = 0; j < n; j++)
    {
        matC[i][j]=matA[i][j] + matB[i][j];
        printf("%d ", matC[i][j]);

    }
    printf("\n");
    
}





    return 0;
}
