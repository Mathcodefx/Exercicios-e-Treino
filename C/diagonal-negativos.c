/*Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz. */

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese_brazil");

int n;

printf("Qual a ordem da matriz? ");
scanf("%d", &n);

int matriz[n][n], negativos=0;

  for (int i=0; i<n; i++ )
{
    for (int j=0; j<n; j++ )
    {
      printf ("\nElemento[%d,%d]: ", i, j);
      scanf ("%d", &matriz[i][j]);
    }
}

printf("DIAGONAL PRINCIPAL:\n");


for (int i=0; i<n; i++ )
{
    printf("%d\n", matriz[i][i]);
}


  for (int i=0; i<n; i++ )
{
    for (int j=0; j<n; j++ )
    {
      if (matriz[i][j]<0)
      {
        negativos++;
      }
      
    }
}

printf("Negativos: ", negativos);


    return 0;
}

