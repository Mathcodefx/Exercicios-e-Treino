/*Problema "cada_linha" 
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento 
de cada linha. Suponha não haver empates. */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n, recebedor;

printf("Qual a ordem da matriz? ");
scanf("%d", &n);

int mat[n][n], vet[n];

for ( int i=0; i <n; i++)
{
    for (int j=0; j<n; j++)
    {
        printf("Elemento [%d,%d]: ", i, j);
        scanf("%d", &mat[i][j]);
    }
    
}

for ( int i=0; i <n; i++)
{

    for (int j=1; j<n; j++)
    {
        recebedor=mat[i][0];
        if (recebedor<mat[i][j])
        {
            recebedor=mat[i][j];
        }
        
    }
        vet[i]=recebedor;
}

printf("MAIOR ELEMENTO DE CADA LINHA: \n");

for ( int i=0; i <n; i++)
{
  
     printf("%d\n",  vet[i]);   
    
}



    return 0;
}

